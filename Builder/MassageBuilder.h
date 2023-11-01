#pragma once
#include <iostream>
#include "Message.h"
using namespace std;
class MassageBuilder 
 
{
protected:
    bool Email;
	bool SMS;
	bool Post;
	
public:
	virtual void sendMassage();

};

