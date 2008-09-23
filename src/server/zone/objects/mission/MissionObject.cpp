/*
 *	server/zone/objects/mission/MissionObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionObject.h"

#include "MissionObjectImplementation.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../tangible/TangibleObject.h"

/*
 *	MissionObjectStub
 */

MissionObject::MissionObject(unsigned long long oid) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new MissionObjectImplementation(oid);
	_impl->_setStub(this);
}

MissionObject::MissionObject(DummyConstructorParameter* param) : SceneObject(param) {
}

MissionObject::~MissionObject() {
}

void MissionObject::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->init();
}

void MissionObject::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendTo(player, doClose);
}

void MissionObject::sendDeltaTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendDeltaTo(player);
}

void MissionObject::doLinkToPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->doLinkToPlayer(player);
}

void MissionObject::sendDestroyTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendDestroyTo(player);
}

void MissionObject::setDBKey(string& tdbk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addAsciiParameter(tdbk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDBKey(tdbk);
}

string& MissionObject::getDBKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getDBKey);
		return _return_getDBKey;
	} else
		return ((MissionObjectImplementation*) _impl)->getDBKey();
}

void MissionObject::applyTerminalMask(int tam) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addSignedIntParameter(tam);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->applyTerminalMask(tam);
}

int MissionObject::getTerminalMask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTerminalMask();
}

void MissionObject::setDeliverItem(TangibleObject* tdi) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(tdi);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDeliverItem(tdi);
}

TangibleObject* MissionObject::getDeliverItem() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDeliverItem();
}

void MissionObject::setTypeStr(const string& tstr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addAsciiParameter(tstr);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeStr(tstr);
}

string& MissionObject::getTypeStr() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithAsciiReturn(_return_getTypeStr);
		return _return_getTypeStr;
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeStr();
}

void MissionObject::setDescKey(int tdk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addSignedIntParameter(tdk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDescKey(tdk);
}

unsigned int MissionObject::getDescKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDescKey();
}

void MissionObject::setTitleKey(int ttk) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addSignedIntParameter(ttk);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTitleKey(ttk);
}

unsigned int MissionObject::getTitleKey() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTitleKey();
}

void MissionObject::setDifficultyLevel(unsigned int tdlv) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addUnsignedIntParameter(tdlv);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDifficultyLevel(tdlv);
}

unsigned int MissionObject::getDifficultyLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDifficultyLevel();
}

void MissionObject::setDestX(float tdx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addFloatParameter(tdx);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestX(tdx);
}

float MissionObject::getDestX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestX();
}

void MissionObject::setDestY(float tdy) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addFloatParameter(tdy);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestY(tdy);
}

float MissionObject::getDestY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestY();
}

void MissionObject::setDestPlanetCrc(unsigned int tpc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addUnsignedIntParameter(tpc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDestPlanetCrc(tpc);
}

unsigned int MissionObject::getDestPlanetCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDestPlanetCrc();
}

void MissionObject::setCreatorName(const unicode& tcn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addUnicodeParameter(tcn);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setCreatorName(tcn);
}

unicode& MissionObject::getCreatorName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		method.executeWithUnicodeReturn(_return_getCreatorName);
		return _return_getCreatorName;
	} else
		return ((MissionObjectImplementation*) _impl)->getCreatorName();
}

void MissionObject::setReward(unsigned int tr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addUnsignedIntParameter(tr);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setReward(tr);
}

unsigned int MissionObject::getReward() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getReward();
}

void MissionObject::setTargetX(float ttx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addFloatParameter(ttx);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetX(ttx);
}

float MissionObject::getTargetX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetX();
}

void MissionObject::setTargetY(float tty) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);
		method.addFloatParameter(tty);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetY(tty);
}

float MissionObject::getTargetY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetY();
}

void MissionObject::setTargetPlanetCrc(unsigned int tpc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addUnsignedIntParameter(tpc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTargetPlanetCrc(tpc);
}

unsigned int MissionObject::getTargetPlanetCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetPlanetCrc();
}

void MissionObject::setDepictedObjCrc(unsigned int tsdc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addUnsignedIntParameter(tsdc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDepictedObjCrc(tsdc);
}

unsigned int MissionObject::getDepictedObjCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDepictedObjCrc();
}

void MissionObject::setDescriptionStf(const string& tds) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addAsciiParameter(tds);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setDescriptionStf(tds);
}

string& MissionObject::getDescriptionStf() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		method.executeWithAsciiReturn(_return_getDescriptionStf);
		return _return_getDescriptionStf;
	} else
		return ((MissionObjectImplementation*) _impl)->getDescriptionStf();
}

void MissionObject::setTitleStf(const string& tts) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);
		method.addAsciiParameter(tts);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTitleStf(tts);
}

string& MissionObject::getTitleStf() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		method.executeWithAsciiReturn(_return_getTitleStf);
		return _return_getTitleStf;
	} else
		return ((MissionObjectImplementation*) _impl)->getTitleStf();
}

void MissionObject::setRefreshCount(unsigned int trc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);
		method.addUnsignedIntParameter(trc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRefreshCount(trc);
}

unsigned int MissionObject::getRefreshCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRefreshCount();
}

void MissionObject::setTypeCrc(unsigned int ttc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);
		method.addUnsignedIntParameter(ttc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeCrc(ttc);
}

unsigned int MissionObject::getTypeCrc() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeCrc();
}

/*
 *	MissionObjectAdapter
 */

MissionObjectAdapter::MissionObjectAdapter(MissionObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* MissionObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 8:
		sendDeltaTo((Player*) inv->getObjectParameter());
		break;
	case 9:
		doLinkToPlayer((Player*) inv->getObjectParameter());
		break;
	case 10:
		sendDestroyTo((Player*) inv->getObjectParameter());
		break;
	case 11:
		setDBKey(inv->getAsciiParameter(_param0_setDBKey__string_));
		break;
	case 12:
		resp->insertAscii(getDBKey());
		break;
	case 13:
		applyTerminalMask(inv->getSignedIntParameter());
		break;
	case 14:
		resp->insertSignedInt(getTerminalMask());
		break;
	case 15:
		setDeliverItem((TangibleObject*) inv->getObjectParameter());
		break;
	case 16:
		resp->insertLong(getDeliverItem()->_getObjectID());
		break;
	case 17:
		setTypeStr(inv->getAsciiParameter(_param0_setTypeStr__string_));
		break;
	case 18:
		resp->insertAscii(getTypeStr());
		break;
	case 19:
		setDescKey(inv->getSignedIntParameter());
		break;
	case 20:
		resp->insertInt(getDescKey());
		break;
	case 21:
		setTitleKey(inv->getSignedIntParameter());
		break;
	case 22:
		resp->insertInt(getTitleKey());
		break;
	case 23:
		setDifficultyLevel(inv->getUnsignedIntParameter());
		break;
	case 24:
		resp->insertInt(getDifficultyLevel());
		break;
	case 25:
		setDestX(inv->getFloatParameter());
		break;
	case 26:
		resp->insertFloat(getDestX());
		break;
	case 27:
		setDestY(inv->getFloatParameter());
		break;
	case 28:
		resp->insertFloat(getDestY());
		break;
	case 29:
		setDestPlanetCrc(inv->getUnsignedIntParameter());
		break;
	case 30:
		resp->insertInt(getDestPlanetCrc());
		break;
	case 31:
		setCreatorName(inv->getUnicodeParameter(_param0_setCreatorName__unicode_));
		break;
	case 32:
		resp->insertUnicode(getCreatorName());
		break;
	case 33:
		setReward(inv->getUnsignedIntParameter());
		break;
	case 34:
		resp->insertInt(getReward());
		break;
	case 35:
		setTargetX(inv->getFloatParameter());
		break;
	case 36:
		resp->insertFloat(getTargetX());
		break;
	case 37:
		setTargetY(inv->getFloatParameter());
		break;
	case 38:
		resp->insertFloat(getTargetY());
		break;
	case 39:
		setTargetPlanetCrc(inv->getUnsignedIntParameter());
		break;
	case 40:
		resp->insertInt(getTargetPlanetCrc());
		break;
	case 41:
		setDepictedObjCrc(inv->getUnsignedIntParameter());
		break;
	case 42:
		resp->insertInt(getDepictedObjCrc());
		break;
	case 43:
		setDescriptionStf(inv->getAsciiParameter(_param0_setDescriptionStf__string_));
		break;
	case 44:
		resp->insertAscii(getDescriptionStf());
		break;
	case 45:
		setTitleStf(inv->getAsciiParameter(_param0_setTitleStf__string_));
		break;
	case 46:
		resp->insertAscii(getTitleStf());
		break;
	case 47:
		setRefreshCount(inv->getUnsignedIntParameter());
		break;
	case 48:
		resp->insertInt(getRefreshCount());
		break;
	case 49:
		setTypeCrc(inv->getUnsignedIntParameter());
		break;
	case 50:
		resp->insertInt(getTypeCrc());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionObjectAdapter::init() {
	return ((MissionObjectImplementation*) impl)->init();
}

void MissionObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((MissionObjectImplementation*) impl)->sendTo(player, doClose);
}

void MissionObjectAdapter::sendDeltaTo(Player* player) {
	return ((MissionObjectImplementation*) impl)->sendDeltaTo(player);
}

void MissionObjectAdapter::doLinkToPlayer(Player* player) {
	return ((MissionObjectImplementation*) impl)->doLinkToPlayer(player);
}

void MissionObjectAdapter::sendDestroyTo(Player* player) {
	return ((MissionObjectImplementation*) impl)->sendDestroyTo(player);
}

void MissionObjectAdapter::setDBKey(string& tdbk) {
	return ((MissionObjectImplementation*) impl)->setDBKey(tdbk);
}

string& MissionObjectAdapter::getDBKey() {
	return ((MissionObjectImplementation*) impl)->getDBKey();
}

void MissionObjectAdapter::applyTerminalMask(int tam) {
	return ((MissionObjectImplementation*) impl)->applyTerminalMask(tam);
}

int MissionObjectAdapter::getTerminalMask() {
	return ((MissionObjectImplementation*) impl)->getTerminalMask();
}

void MissionObjectAdapter::setDeliverItem(TangibleObject* tdi) {
	return ((MissionObjectImplementation*) impl)->setDeliverItem(tdi);
}

TangibleObject* MissionObjectAdapter::getDeliverItem() {
	return ((MissionObjectImplementation*) impl)->getDeliverItem();
}

void MissionObjectAdapter::setTypeStr(const string& tstr) {
	return ((MissionObjectImplementation*) impl)->setTypeStr(tstr);
}

string& MissionObjectAdapter::getTypeStr() {
	return ((MissionObjectImplementation*) impl)->getTypeStr();
}

void MissionObjectAdapter::setDescKey(int tdk) {
	return ((MissionObjectImplementation*) impl)->setDescKey(tdk);
}

unsigned int MissionObjectAdapter::getDescKey() {
	return ((MissionObjectImplementation*) impl)->getDescKey();
}

void MissionObjectAdapter::setTitleKey(int ttk) {
	return ((MissionObjectImplementation*) impl)->setTitleKey(ttk);
}

unsigned int MissionObjectAdapter::getTitleKey() {
	return ((MissionObjectImplementation*) impl)->getTitleKey();
}

void MissionObjectAdapter::setDifficultyLevel(unsigned int tdlv) {
	return ((MissionObjectImplementation*) impl)->setDifficultyLevel(tdlv);
}

unsigned int MissionObjectAdapter::getDifficultyLevel() {
	return ((MissionObjectImplementation*) impl)->getDifficultyLevel();
}

void MissionObjectAdapter::setDestX(float tdx) {
	return ((MissionObjectImplementation*) impl)->setDestX(tdx);
}

float MissionObjectAdapter::getDestX() {
	return ((MissionObjectImplementation*) impl)->getDestX();
}

void MissionObjectAdapter::setDestY(float tdy) {
	return ((MissionObjectImplementation*) impl)->setDestY(tdy);
}

float MissionObjectAdapter::getDestY() {
	return ((MissionObjectImplementation*) impl)->getDestY();
}

void MissionObjectAdapter::setDestPlanetCrc(unsigned int tpc) {
	return ((MissionObjectImplementation*) impl)->setDestPlanetCrc(tpc);
}

unsigned int MissionObjectAdapter::getDestPlanetCrc() {
	return ((MissionObjectImplementation*) impl)->getDestPlanetCrc();
}

void MissionObjectAdapter::setCreatorName(const unicode& tcn) {
	return ((MissionObjectImplementation*) impl)->setCreatorName(tcn);
}

unicode& MissionObjectAdapter::getCreatorName() {
	return ((MissionObjectImplementation*) impl)->getCreatorName();
}

void MissionObjectAdapter::setReward(unsigned int tr) {
	return ((MissionObjectImplementation*) impl)->setReward(tr);
}

unsigned int MissionObjectAdapter::getReward() {
	return ((MissionObjectImplementation*) impl)->getReward();
}

void MissionObjectAdapter::setTargetX(float ttx) {
	return ((MissionObjectImplementation*) impl)->setTargetX(ttx);
}

float MissionObjectAdapter::getTargetX() {
	return ((MissionObjectImplementation*) impl)->getTargetX();
}

void MissionObjectAdapter::setTargetY(float tty) {
	return ((MissionObjectImplementation*) impl)->setTargetY(tty);
}

float MissionObjectAdapter::getTargetY() {
	return ((MissionObjectImplementation*) impl)->getTargetY();
}

void MissionObjectAdapter::setTargetPlanetCrc(unsigned int tpc) {
	return ((MissionObjectImplementation*) impl)->setTargetPlanetCrc(tpc);
}

unsigned int MissionObjectAdapter::getTargetPlanetCrc() {
	return ((MissionObjectImplementation*) impl)->getTargetPlanetCrc();
}

void MissionObjectAdapter::setDepictedObjCrc(unsigned int tsdc) {
	return ((MissionObjectImplementation*) impl)->setDepictedObjCrc(tsdc);
}

unsigned int MissionObjectAdapter::getDepictedObjCrc() {
	return ((MissionObjectImplementation*) impl)->getDepictedObjCrc();
}

void MissionObjectAdapter::setDescriptionStf(const string& tds) {
	return ((MissionObjectImplementation*) impl)->setDescriptionStf(tds);
}

string& MissionObjectAdapter::getDescriptionStf() {
	return ((MissionObjectImplementation*) impl)->getDescriptionStf();
}

void MissionObjectAdapter::setTitleStf(const string& tts) {
	return ((MissionObjectImplementation*) impl)->setTitleStf(tts);
}

string& MissionObjectAdapter::getTitleStf() {
	return ((MissionObjectImplementation*) impl)->getTitleStf();
}

void MissionObjectAdapter::setRefreshCount(unsigned int trc) {
	return ((MissionObjectImplementation*) impl)->setRefreshCount(trc);
}

unsigned int MissionObjectAdapter::getRefreshCount() {
	return ((MissionObjectImplementation*) impl)->getRefreshCount();
}

void MissionObjectAdapter::setTypeCrc(unsigned int ttc) {
	return ((MissionObjectImplementation*) impl)->setTypeCrc(ttc);
}

unsigned int MissionObjectAdapter::getTypeCrc() {
	return ((MissionObjectImplementation*) impl)->getTypeCrc();
}

/*
 *	MissionObjectHelper
 */

MissionObjectHelper* MissionObjectHelper::staticInitializer = MissionObjectHelper::instance();

MissionObjectHelper::MissionObjectHelper() {
	className = "MissionObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObjectHelper::finalizeHelper() {
	MissionObjectHelper::finalize();
}

DistributedObject* MissionObjectHelper::instantiateObject() {
	return new MissionObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectAdapter((MissionObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionObjectServant
 */

MissionObjectServant::MissionObjectServant(unsigned long long oid, int type) : SceneObjectImplementation(oid, type) {
	_classHelper = MissionObjectHelper::instance();
}

MissionObjectServant::~MissionObjectServant() {
}

void MissionObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObject*) stub;
	SceneObjectServant::_setStub(stub);
}

DistributedObjectStub* MissionObjectServant::_getStub() {
	return _this;
}

