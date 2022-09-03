#pragma once
#include "Name.h"

class Mail
{
private:
	string _mail;
public:
	Mail();
	Mail(Name);
	Mail(const Mail&);
	friend istream& operator >> (istream&, Mail&);
	friend ostream& operator << (ostream&, Mail);
};

