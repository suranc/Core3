/*
 *	server/zone/managers/creature/CreatureManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef CREATUREMANAGER_H_
#define CREATUREMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace packets {

class MessageCallback;

} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class NonPlayerCreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class AiAgent;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

#include "server/zone/managers/creature/CreatureMap.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace managers {
namespace creature {

class CreatureManager : public ManagedObject {
public:
	CreatureManager(Zone* planet, ZoneProcessServerImplementation* impl);

	void initialize();

	CreatureObject* spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID = 0);

	int notifyDestruction(TangibleObject* destructor, AiAgent* destructedObject, int condition);

	void loadDynamicSpawnAreas();

	void loadSingleSpawns();

	void loadTrainers();

protected:
	CreatureManager(DummyConstructorParameter* param);

	virtual ~CreatureManager();

	friend class CreatureManagerHelper;
};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class CreatureManagerImplementation : public ManagedObjectImplementation, public Logger {
protected:
	ZoneProcessServerImplementation* processor;

	ManagedReference<ZoneServer* > server;

	ManagedWeakReference<Zone* > zone;

public:
	CreatureManagerImplementation(Zone* planet, ZoneProcessServerImplementation* impl);

	CreatureManagerImplementation(DummyConstructorParameter* param);

	void initialize();

	CreatureObject* spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID = 0);

	int notifyDestruction(TangibleObject* destructor, AiAgent* destructedObject, int condition);

	void loadDynamicSpawnAreas();

	void loadSingleSpawns();

	void loadTrainers();

private:
	bool createCreatureChildrenObjects(CreatureObject* creature);

public:
	CreatureManager* _this;

	operator const CreatureManager*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~CreatureManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class CreatureManager;
};

class CreatureManagerAdapter : public ManagedObjectAdapter {
public:
	CreatureManagerAdapter(CreatureManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	CreatureObject* spawnCreature(unsigned int templateCRC, float x, float z, float y, unsigned long long parentID);

	void loadDynamicSpawnAreas();

	void loadSingleSpawns();

	void loadTrainers();

};

class CreatureManagerHelper : public DistributedObjectClassHelper, public Singleton<CreatureManagerHelper> {
	static CreatureManagerHelper* staticInitializer;

public:
	CreatureManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<CreatureManagerHelper>;
};

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

#endif /*CREATUREMANAGER_H_*/
