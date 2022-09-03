#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

class Address
{
private:
	int _num;
	string _road;
	string _ward;
	string _dis;
	string _fullAddress;
public:
	Address();
	Address(int, string, string, string);
	Address(const Address&);
	void SplitStringAddress(string);
	friend istream& operator >> (istream&, Address&);
	friend ostream& operator << (ostream&, Address);
};

