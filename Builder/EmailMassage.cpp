#include "EmailMassage.h"


string EmailMassage::sendMessage() {
	_header.push_back(HEADER());
	_text.push_back(TEXT());
	return "You send:\n" + _header.back() + "\n" + _text.back() + "\n\n";

}