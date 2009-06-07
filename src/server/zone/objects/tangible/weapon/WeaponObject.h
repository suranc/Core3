/*
 *	server/zone/objects/tangible/weapon/WeaponObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef WEAPONOBJECT_H_
#define WEAPONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

#include "../TangibleObject.h"

class WeaponObject : public TangibleObject {
public:
	WeaponObject(unsigned long long objectid, int type = 20000);

protected:
	WeaponObject(DummyConstructorParameter* param);

	virtual ~WeaponObject();

	friend class WeaponObjectHelper;
};

class WeaponObjectImplementation;

class WeaponObjectAdapter : public TangibleObjectAdapter {
public:
	WeaponObjectAdapter(WeaponObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

};

class WeaponObjectHelper : public DistributedObjectClassHelper, public Singleton<WeaponObjectHelper> {
	static WeaponObjectHelper* staticInitializer;

public:
	WeaponObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<WeaponObjectHelper>;
};

#include "../TangibleObjectImplementation.h"

class WeaponObjectServant : public TangibleObjectImplementation {
public:
	WeaponObject* _this;

public:
	WeaponObjectServant(unsigned long long objectid, int type);
	virtual ~WeaponObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*WEAPONOBJECT_H_*/
