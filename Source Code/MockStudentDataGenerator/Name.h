#pragma once
#include<iostream>
#include<string>
using namespace std;

class Name
{
private:
	string _lastName;
	string _midName;
	string _firstName;
public:
	Name();
	Name(string, string, string);
	Name(const Name&);
	friend istream& operator >> (istream&, Name&);
	friend ostream& operator << (ostream&, Name);
	string GetterLastName();
	string GetterMidName();
	string GetterFirstName();
};