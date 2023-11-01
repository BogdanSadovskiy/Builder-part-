#include "SMSMessage.h"
string SMSMessage::sendMessage() {
	this->_text.push_back(this->TEXT());
	return "You send:\n" + _text.back() + "\n\n";
}