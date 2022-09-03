#pragma once
#include<iostream>
#include<string>
using namespace std;

class Phone
{
private:
	string _telephone;
public:
	Phone();
	Phone(string);
	Phone(const Phone&);
	friend istream& operator >> (istream&, Phone&);
	friend ostream& operator << (ostream&, Phone);
};

