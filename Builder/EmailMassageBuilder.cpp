#include "EmailMassageBuilder.h"
EmailMassageBuilder::EmailMassageBuilder() {
	this->Email = true;
	this->Post = false;
	this->SMS = false;
}

void EmailMassageBuilder::sendMassage() {

	m.sendMesage();
}