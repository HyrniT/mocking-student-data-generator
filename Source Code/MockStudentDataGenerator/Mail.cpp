#include "Mail.h"

Mail::Mail()
{
	_mail = "NULL";
}

Mail::Mail(Name fullname)
{
	char res;
	res = fullname.GetterLastName()[0];
	_mail += tolower(res);
	res = fullname.GetterMidName()[0];
	_mail += tolower(res);
	res = fullname.GetterFirstName()[0];
	_mail += tolower(res);
	_mail += fullname.GetterFirstName().substr(1);
	_mail += "@student.hcmus.edu.vn";
}

Mail::Mail(const Mail& mail)
{
	_mail = mail._mail;
}

istream& operator>>(istream& is, Mail& mail)
{
	is >> mail._mail;
	return is;
}

ostream& operator<<(ostream& os, Mail mail)
{
	os << mail._mail;
	return os;
}
