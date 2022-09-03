#include "Phone.h"

Phone::Phone()
{
	_telephone = "0";
}

Phone::Phone(string telephone)
{
	_telephone = telephone;
}

Phone::Phone(const Phone& phone)
{
	_telephone = phone._telephone;
}

istream& operator>>(istream& is, Phone& phone)
{
	is >> phone._telephone;
	return is;
}

ostream& operator<<(ostream& os, Phone phone)
{
	os << phone._telephone;
	return os;
}
