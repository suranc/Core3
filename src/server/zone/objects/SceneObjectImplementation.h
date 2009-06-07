/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#ifndef SCENEOBJECTIMPLEMENTATION_H_
#define SCENEOBJECTIMPLEMENTATION_H_

#include "engine/engine.h"
#include "../ZoneProcessServerImplementation.h"
#include "events/UndeploySceneObjectEvent.h"
#include "../Zone.h"
#include "../ZoneClientSession.h"
#include "../Quaternion.h"
#include "SceneObject.h"
#include "Container.h"

class PlayerObject;
class ObjectMenuResponse;
class SceneObjectImplementation : public SceneObjectServant, public QuadTreeEntry, public Container, public Logger {
protected:
	UndeploySceneObjectEvent* undeployEvent;
	ZoneProcessServerImplementation* server;
	Zone* zone;

	SceneObject* parent;

	String stfFile;
	String stfName;
	UnicodeString customName;

	Quaternion direction;

	float complexity;

	uint64 ownerCharacterID;
	uint64 objectID;
	uint32 objectCRC;
	uint32 linkType;
	uint32 volume;

	int gameObjectType;

	bool keepObject;

public:
	//Game Object Types
	static const int SCENE = 0x00;
	static const int CELL = 0x00;
	static const int CORPSE = 0x01;

	//Universe Objects
	static const int GROUP = 0x02;
	static const int GUILD = 0x03;

	static const int LAIR = 0x04; //Also appears to be general attackable objects.
	static const int STATIC = 0x05;
	static const int CAMPSPIT = 0x06; //Doesn't appear to be anything else in this category.

	//Tangible Objects - Top level
	static const int ARMOR = 0x100;
	static const int BUILDING = 0x200;
	static const int CREATURE = 0x400;
	static const int PLAYER = 0x401;
	static const int INSTALLATION = 0x1000;
	static const int MISC = 0x2000;
	static const int TERMINAL = 0x4000;
	static const int TOOL = 0x8000;
	static const int VEHICLE = 0x10000;
	static const int WEAPON = 0x20000;
	static const int COMPONENT = 0x40000;
	static const int WEAPONPOWERUP = 0x80000;
	static const int ARMORPOWERUP = 0x100000;
	static const int JEWELRY = 0x200000;
	static const int RESOURCECONTAINER = 0x400000;
	static const int DEED = 0x800000;
	static const int WEARABLE = 0x1000000;
	static const int SHIP = 0x20000000;
	static const int SHIPCOMPONENTS = 0x40000000;

	// Intangible
	static const int INTANGIBLE = 0x800;

public:
	SceneObjectImplementation(uint64 objectid, int type);
	virtual ~SceneObjectImplementation();

	virtual void initialize();

	//Saving and loading
	virtual void serialize(String& str);
	virtual void deserialize(const String& str);

	//ORB methods
	bool destroy();
	void scheduleUndeploy();
	void undeploy();
	void removeUndeploymentEvent();
	void redeploy();

	inline void setObjectKeeping(bool keeping) {
		keepObject = true;
	}

	inline void clearUndeploymentEvent() {
		undeployEvent = NULL;
	}

	inline bool isUndeploymentScheduled() {
		return undeployEvent != NULL;
	}

	//QuadTree Methods
	bool isInRange(SceneObject* obj, float range) {
		return QuadTreeEntry::isInRange(obj->getPositionX(), obj->getPositionZ(), range);
	}

	bool isInRange(float x, float z, float range) {
		return QuadTreeEntry::isInRange(x, z, range);
	}

	inline QuadTreeEntry* getQuadTreeEntry() {
		return (QuadTreeEntry*) this;
	}

	//Sending of data to client
	virtual void sendTo(PlayerObject* player, bool doclose = true);
	virtual void sendDestroyTo(PlayerObject* player);
	virtual void sendRadialResponseTo(PlayerObject* player, ObjectMenuResponse* omr);
	virtual void sendConversationStopTo(PlayerObject* player);
	virtual void sendCustomNamePromptTo(PlayerObject* player);
	virtual void sendStatusTo(PlayerObject* player); //TODO: We can use this for administrative purposes, and of course for structures/camps.

	virtual void broadcastMessage(BaseMessage* msg, int range = 128, bool dolock = true, bool sendself = true);
	virtual void broadcastMessage(StandaloneBaseMessage* msg, int range = 128, bool dolock = true);
	void broadcastMessages(Vector<BaseMessage*>& msgs, int range = 128, bool dolock = true);

	//General actions.
	virtual void use(PlayerObject* player);
	virtual void pickup(PlayerObject* player);
	virtual void drop(PlayerObject* player);
	virtual void destroyObject(PlayerObject* player);
	virtual void open(PlayerObject* player);
	virtual void activate(PlayerObject* player);
	virtual void deactivate(PlayerObject* player);

	//These radial responses can be overridden.
	virtual void onRadialMenu1(PlayerObject* player);
	virtual void onRadialMenu2(PlayerObject* player);
	virtual void onRadialMenu3(PlayerObject* player);
	virtual void onRadialMenu4(PlayerObject* player);
	virtual void onRadialMenu5(PlayerObject* player);
	virtual void onRadialMenu6(PlayerObject* player);
	virtual void onRadialMenu7(PlayerObject* player);
	virtual void onRadialMenu8(PlayerObject* player);
	virtual void onRadialMenu9(PlayerObject* player);
	virtual void onRadialMenu10(PlayerObject* player);

	//Event handlers.
	virtual void onDragDrop(PlayerObject* player, SceneObject* target);

	//Setters
	inline void setParent(SceneObject* obj, uint32 linktype = 0x04) {
		if (obj != _this) {
			parent = obj;
			linkType = linktype;
		}
	}

	inline void setZoneProcessServer(ZoneProcessServerImplementation* srvr) {
		server = srvr;
	}

	inline void setZone(Zone* zne) {
		zone = zne;
	}

	inline void setDirection(float x, float y, float z, float w) {
		direction = Quaternion(w, x, y, z);
	}

	inline void setCustomName(const UnicodeString& customname) {
		customName = customname;
	}

	inline void setStfFile(const String& stffile) {
		stfFile = stffile;
	}

	inline void setStfName(const String& stfname) {
		stfName = stfname;
	}

	//Getters
	inline SceneObject* getParent() {
		return parent;
	}

	inline uint32 getLinkType() {
		return linkType;
	}

	inline ZoneProcessServerImplementation* getZoneProcessServer() {
		return server;
	}

	inline Zone* getZone() {
		return zone;
	}

	inline uint32 getZoneID() {
		if (zone == NULL)
			return 0;

		return zone->getZoneID();
	}

	inline float getDirectionX() {
		return direction.getX();
	}

	inline float getDirectionY() {
		return direction.getY();
	}

	inline float getDirectionZ() {
		return direction.getZ();
	}

	inline float getDirectionW() {
		return direction.getW();
	}

	inline String& getStfFile() {
		return stfFile;
	}

	inline String& getStfName() {
		return stfName;
	}

	inline UnicodeString& getCustomName() {
		return customName;
	}

	inline uint64 getObjectID() {
		return objectID;
	}

	inline uint32 getObjectCRC() {
		return objectCRC;
	}

	inline uint32 getObjectType() {
		return gameObjectType;
	}

	inline float getComplexity() {
		return complexity;
	}

	inline uint32 getVolume() {
		return volume;
	}

	bool isObjectType(int type, bool similar = false);

	inline bool isPlayer() {
		return (gameObjectType == PLAYER);
	}
};

#endif /*SCENEOBJECTIMPLEMENTATION_H_*/
