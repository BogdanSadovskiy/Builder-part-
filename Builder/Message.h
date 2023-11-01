#pragma once
#include  "MassageBuilder.h"
#include <vector>
#include <string>
class Message
{
protected:
	string HEADER() {
		cout << "Input header:\n";
		string h; getline(cin, h);
		return h;
	}

	string TEXT() {
		cout << "Input TEXT:\n";
		string t; getline(cin, t);
		return t;
	}

	vector <string> _header;
	vector <string> _text;
public:

	virtual string sendMessage() {};
	
};

