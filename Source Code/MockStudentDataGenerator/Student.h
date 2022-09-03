#pragma once
#include "Name.h"
#include "Score.h"
#include "Phone.h"
#include "Mail.h"
#include "Date.h"
#include "Address.h"
#include "Mail.h"
#include<string>

class Student
{
private:
	int s_id;
	Name s_name;
	Score s_score;
	Phone s_phone;
	Mail s_mail;
	Date s_dob;
	Address s_address;
public:
	Student();
	int GetterId();
	Student(int, Name, Score, Phone, Mail, Date, Address);
	friend istream& operator >> (istream&, Student&);
	friend ostream& operator << (ostream&, Student);
	Score GetterScore();
	string GetterFullName();
};