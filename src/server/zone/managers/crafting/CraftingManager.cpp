/*
 *	server/zone/managers/crafting/CraftingManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingManager.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/object/ObjectManager.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

/*
 *	CraftingManagerStub
 */

CraftingManager::CraftingManager(ZoneServer* serv, ZoneProcessServerImplementation* proc, ObjectManager* objman) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new CraftingManagerImplementation(serv, proc, objman);
	_impl->_setStub(this);
}

CraftingManager::CraftingManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

CraftingManager::~CraftingManager() {
}


void CraftingManager::initialize() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((CraftingManagerImplementation*) _impl)->initialize();
}

void CraftingManager::awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((CraftingManagerImplementation*) _impl)->awardSchematicGroup(playerObject, schematicgroups, updateClient);
}

void CraftingManager::removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((CraftingManagerImplementation*) _impl)->removeSchematicGroup(playerObject, schematicgroups, updateClient);
}

DraftSchematic* CraftingManager::getSchematic(unsigned int schematicID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addUnsignedIntParameter(schematicID);

		return (DraftSchematic*) method.executeWithObjectReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->getSchematic(schematicID);
}

void CraftingManager::sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(schematicID);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->sendDraftSlotsTo(player, schematicID);
}

void CraftingManager::sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(schematicID);

		method.executeWithVoidReturn();
	} else
		((CraftingManagerImplementation*) _impl)->sendResourceWeightsTo(player, schematicID);
}

int CraftingManager::calculateAssemblySuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);
		method.addObjectParameter(draftSchematic);
		method.addFloatParameter(effectiveness);

		return method.executeWithSignedIntReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateAssemblySuccess(player, draftSchematic, effectiveness);
}

float CraftingManager::calculateAssemblyValueModifier(int assemblyResult) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addSignedIntParameter(assemblyResult);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateAssemblyValueModifier(assemblyResult);
}

float CraftingManager::getAssemblyPercentage(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addFloatParameter(value);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->getAssemblyPercentage(value);
}

int CraftingManager::calculateExperimentationFailureRate(PlayerCreature* player, ManufactureSchematic* manufactureSchematic, int pointsUsed) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addObjectParameter(manufactureSchematic);
		method.addSignedIntParameter(pointsUsed);

		return method.executeWithSignedIntReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateExperimentationFailureRate(player, manufactureSchematic, pointsUsed);
}

int CraftingManager::calculateExperimentationSuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addObjectParameter(draftSchematic);
		method.addFloatParameter(effectiveness);

		return method.executeWithSignedIntReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateExperimentationSuccess(player, draftSchematic, effectiveness);
}

float CraftingManager::calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(experimentationResult);
		method.addSignedIntParameter(pointsAttempted);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->calculateExperimentationValueModifier(experimentationResult, pointsAttempted);
}

float CraftingManager::getWeightedValue(ManufactureSchematic* manufactureSchematic, int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(manufactureSchematic);
		method.addSignedIntParameter(type);

		return method.executeWithFloatReturn();
	} else
		return ((CraftingManagerImplementation*) _impl)->getWeightedValue(manufactureSchematic, type);
}

String CraftingManager::generateSerial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithAsciiReturn(_return_generateSerial);
		return _return_generateSerial;
	} else
		return ((CraftingManagerImplementation*) _impl)->generateSerial();
}

/*
 *	CraftingManagerImplementation
 */

CraftingManagerImplementation::CraftingManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

CraftingManagerImplementation::~CraftingManagerImplementation() {
}


void CraftingManagerImplementation::finalize() {
}

void CraftingManagerImplementation::_initializeImplementation() {
	_setClassHelper(CraftingManagerHelper::instance());

	_serializationHelperMethod();
}

void CraftingManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingManagerImplementation::_getStub() {
	return _this;
}

CraftingManagerImplementation::operator const CraftingManager*() {
	return _this;
}

void CraftingManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingManager");

}

CraftingManagerImplementation::CraftingManagerImplementation(ZoneServer* serv, ZoneProcessServerImplementation* proc, ObjectManager* objman) {
	_initializeImplementation();
	// server/zone/managers/crafting/CraftingManager.idl(98):  		Logger.setLoggingName("CraftingManager");
	Logger::setLoggingName("CraftingManager");
	// server/zone/managers/crafting/CraftingManager.idl(100):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/crafting/CraftingManager.idl(101):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/crafting/CraftingManager.idl(103):  		zoneServer = serv;
	zoneServer = serv;
	// server/zone/managers/crafting/CraftingManager.idl(104):  		zoneProcessor = proc;
	zoneProcessor = proc;
	// server/zone/managers/crafting/CraftingManager.idl(105):  		objectManager = objman;
	objectManager = objman;
}

DraftSchematic* CraftingManagerImplementation::getSchematic(unsigned int schematicID) {
	// server/zone/managers/crafting/CraftingManager.idl(118):  		return schematicMap.get(schematicID);
	return schematicMap->get(schematicID);
}

/*
 *	CraftingManagerAdapter
 */

CraftingManagerAdapter::CraftingManagerAdapter(CraftingManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* CraftingManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(getSchematic(inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case 7:
		sendDraftSlotsTo((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 8:
		sendResourceWeightsTo((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 9:
		resp->insertSignedInt(calculateAssemblySuccess((PlayerCreature*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter(), inv->getFloatParameter()));
		break;
	case 10:
		resp->insertFloat(calculateAssemblyValueModifier(inv->getSignedIntParameter()));
		break;
	case 11:
		resp->insertFloat(getAssemblyPercentage(inv->getFloatParameter()));
		break;
	case 12:
		resp->insertSignedInt(calculateExperimentationFailureRate((PlayerCreature*) inv->getObjectParameter(), (ManufactureSchematic*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 13:
		resp->insertSignedInt(calculateExperimentationSuccess((PlayerCreature*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter(), inv->getFloatParameter()));
		break;
	case 14:
		resp->insertFloat(calculateExperimentationValueModifier(inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		break;
	case 15:
		resp->insertFloat(getWeightedValue((ManufactureSchematic*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 16:
		resp->insertAscii(generateSerial());
		break;
	default:
		return NULL;
	}

	return resp;
}

DraftSchematic* CraftingManagerAdapter::getSchematic(unsigned int schematicID) {
	return ((CraftingManagerImplementation*) impl)->getSchematic(schematicID);
}

void CraftingManagerAdapter::sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID) {
	((CraftingManagerImplementation*) impl)->sendDraftSlotsTo(player, schematicID);
}

void CraftingManagerAdapter::sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID) {
	((CraftingManagerImplementation*) impl)->sendResourceWeightsTo(player, schematicID);
}

int CraftingManagerAdapter::calculateAssemblySuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	return ((CraftingManagerImplementation*) impl)->calculateAssemblySuccess(player, draftSchematic, effectiveness);
}

float CraftingManagerAdapter::calculateAssemblyValueModifier(int assemblyResult) {
	return ((CraftingManagerImplementation*) impl)->calculateAssemblyValueModifier(assemblyResult);
}

float CraftingManagerAdapter::getAssemblyPercentage(float value) {
	return ((CraftingManagerImplementation*) impl)->getAssemblyPercentage(value);
}

int CraftingManagerAdapter::calculateExperimentationFailureRate(PlayerCreature* player, ManufactureSchematic* manufactureSchematic, int pointsUsed) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationFailureRate(player, manufactureSchematic, pointsUsed);
}

int CraftingManagerAdapter::calculateExperimentationSuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationSuccess(player, draftSchematic, effectiveness);
}

float CraftingManagerAdapter::calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationValueModifier(experimentationResult, pointsAttempted);
}

float CraftingManagerAdapter::getWeightedValue(ManufactureSchematic* manufactureSchematic, int type) {
	return ((CraftingManagerImplementation*) impl)->getWeightedValue(manufactureSchematic, type);
}

String CraftingManagerAdapter::generateSerial() {
	return ((CraftingManagerImplementation*) impl)->generateSerial();
}

/*
 *	CraftingManagerHelper
 */

CraftingManagerHelper* CraftingManagerHelper::staticInitializer = CraftingManagerHelper::instance();

CraftingManagerHelper::CraftingManagerHelper() {
	className = "CraftingManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CraftingManagerHelper::finalizeHelper() {
	CraftingManagerHelper::finalize();
}

DistributedObject* CraftingManagerHelper::instantiateObject() {
	return new CraftingManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingManagerHelper::instantiateServant() {
	return new CraftingManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingManagerAdapter((CraftingManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

