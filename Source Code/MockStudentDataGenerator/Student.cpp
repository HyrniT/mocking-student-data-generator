/*
#include "Student.h"

Student::Student()
{
	s_id++;
}

int Student::GetterId()
{
	return s_id;
}

Student::Student(int id, Name name, Score score, Phone phone, Mail mail, Date date, Address address)
{
	s_id = id;
	s_name = name;
	s_score = score;
	s_phone = phone;
	s_mail = mail;
	s_dob = date;
	s_address = address;
}

Score Student::GetterScore()
{
	return s_score;
}

istream& operator>>(istream& is, Student& student)
{
	is.ignore(9); //"Student: "
	is >> student.s_id;
	is.ignore(3); //" - "
	is >> student.s_name;
	is.ignore();  //"xuong dong"
	is.ignore(8); //"    GPA="
	is >> student.s_score;
	is.ignore(12);//", Telephone="
	is >> student.s_phone;
	is.ignore();  //"xuong dong"
	is.ignore(10);//"    Email="
	is >> student.s_mail;
	is.ignore();  //"xuong dong"
	is.ignore(8); //"    DOB="
	is >> student.s_dob;
	is.ignore();  //"xuong dong"
	is.ignore(12);//"    Address="
	is >> student.s_address;
	return is;
}

ostream& operator<<(ostream& os, Student student)
{
	os << "Student: " << student.s_id << " - ";
	os << student.s_name;
	os << "\n" << "    ";
	os << "GPA=";
	os << student.s_score;
	os << ", Telephone=";
	os << student.s_phone;
	os << "\n" << "    ";
	os << "Email=";
	os << student.s_mail;
	os << "\n" << "    ";
	os << "DOB=";
	os << student.s_dob;
	os << "\n" << "    ";
	os << "Address=";
	os << student.s_address;
	os << "\n";
	return os;
}
*/
#include "Student.h"

Student::Student()
{
	s_id = 0;
}

int Student::GetterId()
{
	return s_id;
}

Student::Student(int id, Name name, Score score, Phone phone, Mail mail, Date date, Address address)
{
	s_id = id;
	s_name = name;
	s_score = score;
	s_phone = phone;
	s_mail = mail;
	s_dob = date;
	s_address = address;
}

Score Student::GetterScore()
{
	return s_score;
}

string Student::GetterFullName()
{
	return s_name.GetterLastName() + " " + s_name.GetterMidName() + " " + s_name.GetterFirstName();
}

istream& operator>>(istream& is, Student& student)
{
	is.ignore(9); //"Student: "
	is >> student.s_id;
	is.ignore(3); //" - "
	is >> student.s_name;
	is.ignore();  //"xuong dong"
	is.ignore(8); //"    GPA="
	is >> student.s_score;
	is.ignore(12);//", Telephone="
	is >> student.s_phone;
	is.ignore();  //"xuong dong"
	is.ignore(10);//"    Email="
	is >> student.s_mail;
	is.ignore();  //"xuong dong"
	is.ignore(8); //"    DOB="
	is >> student.s_dob;
	is.ignore();  //"xuong dong"
	is.ignore(12);//"    Address="
	is >> student.s_address;
	return is;
}

ostream& operator<<(ostream& os, Student student)
{
	os << "Student: " << student.s_id << " - ";
	os << student.s_name;
	os << "\n" << "    ";
	os << "GPA=";
	os << student.s_score;
	os << ", Telephone=";
	os << student.s_phone;
	os << "\n" << "    ";
	os << "Email=";
	os << student.s_mail;
	os << "\n" << "    ";
	os << "DOB=";
	os << student.s_dob;
	os << "\n" << "    ";
	os << "Address=";
	os << student.s_address;
	os << "\n";
	return os;
}
