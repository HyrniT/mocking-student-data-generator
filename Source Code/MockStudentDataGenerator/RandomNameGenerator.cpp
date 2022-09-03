#include "RandomNameGenerator.h"

Name RandomNameGenerator::next()
{
	string listOfLastName[10] = { "Tran","Le","Nguyen","Trinh","Vo","Dinh","Ngo","Vu","Pham","Bui" };
	string listOfMidName[10] = { "Quang","Van","Gia","Quoc","Hoang","Thi","Ngoc","Minh","Thu","Dieu" };
	string listOfFirstName[10] = { "Hieu","Huy","Bao","Tuan","Khai","Thao","Trang","Anh","Vy","Hang" };
	string lastName = listOfLastName[_rng.next(0, 9)];
	int temp = _rng.next(0, 9);
	string midName = listOfMidName[temp];
	string firstName = "";
	if (temp < 5)
	{
		int temp1 = _rng.next(0, 4);
		firstName = listOfFirstName[temp1];
	}
	else
	{
		int temp1 = _rng.next(5, 9);
		firstName = listOfFirstName[temp1];
	}
	Name name(lastName, midName, firstName);
	return name;
}