#include "Date.h"

Date::Date()
{
	_day = 0;
	_month = 0;
	_year = 0;
}

Date::Date(int day, int month, int year)
{
	_day = day;
	_month = month;
	_year = year;
}

Date::Date(const Date& date)
{
	_day = date._day;
	_month = date._month;
	_year = date._year;
}

bool Date::isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	return 0;
}

int Date::dayOfMonth(int month, int year)
{
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return 31;
		case 4: case 6: case 9: case 11:
			return 30;
		case 2:
		{
			if (isLeapYear(year))
				return 29;
			else return 28;
		}
	}
	return 0;
}

istream& operator>>(istream& is, Date& date)
{
	is >> date._day;
	is.ignore();
	is >> date._month;
	is.ignore();
	is >> date._year;
	return is;
}

ostream& operator<<(ostream& os, Date date)
{
	string day = to_string(date._day);
	string month = to_string(date._month);
	if (day.size() == 1)
		day = "0" + day;
	if (month.size() == 1)
		month = "0" + month;
	os << day << "/" << month << "/" << date._year;
	return os;
}
