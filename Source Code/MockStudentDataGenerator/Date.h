#pragma once
#include<iostream>
#include<string>
using namespace std;

class Date
{
private:
	int _day;
	int _month;
	int _year;
public:
	Date();
	Date(int, int, int);
	Date(const Date&);
	friend istream& operator >> (istream&, Date&);
	friend ostream& operator << (ostream&, Date);
	static bool isLeapYear(int);
	static int dayOfMonth(int, int);
};

