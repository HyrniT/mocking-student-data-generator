#include "Name.h"

Name::Name()
{
	_lastName = "NULL";
	_midName = "NULL";
	_firstName = "NULL";
}

Name::Name(string lastName, string midName, string firstName)
{
	_lastName = lastName;
	_midName = midName;
	_firstName = firstName;
}

Name::Name(const Name& name)
{
	_lastName = name._lastName;
	_midName = name._midName;
	_firstName = name._firstName;
}

string Name::GetterLastName()
{
	return _lastName;
}

string Name::GetterMidName()
{
	return _midName;
}

string Name::GetterFirstName()
{
	return _firstName;
}

istream& operator>>(istream& is, Name& name)
{
	is >> name._lastName >> name._midName >> name._firstName;
	return is;
}

ostream& operator<<(ostream& os, Name name)
{
	os << name._lastName << " " << name._midName << " " << name._firstName;
	return os;
}
