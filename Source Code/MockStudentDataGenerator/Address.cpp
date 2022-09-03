#include "Address.h"

Address::Address()
{
	_num = 0;
	_road = "NULL";
	_ward = "NULL";
	_dis = "NULL";
}

Address::Address(int num, string road, string ward, string dis)
{
	_num = num;
	_road = road;
	_ward = ward;
	_dis = dis;
}

Address::Address(const Address& address)
{
	_num = address._num;
	_road = address._road;
	_ward = address._ward;
	_dis = address._dis;
}

void Address::SplitStringAddress(string fullAddress)
{
	string temp;
	vector<string> vtemp;
	stringstream ss;
	ss << fullAddress;
	ss >> _num;
	while (getline(ss, temp, ','))
		vtemp.push_back(temp);
	_road = vtemp[0].substr(1); //" "
	_ward = vtemp[1].substr(6); //" Ward "
	if (vtemp[2].size() > 12)
		_dis = vtemp[2].substr(1, vtemp[2].size() - 10); //" ... District"
	else _dis = vtemp[2].substr(10); //" District ..."
}

istream& operator>>(istream& is, Address& address)
{
	//is.ignore();
	getline(is, address._fullAddress);
	address.SplitStringAddress(address._fullAddress);
	return is;
}

ostream& operator<<(ostream& os, Address address)
{
	os << address._num << " " << address._road << ", Ward " << address._ward;
	if (address._dis.size() < 3)
		os << ", District " << address._dis << ", Ho Chi Minh city";
	else os << ", " << address._dis << " District, Ho Chi Minh city";
	//os << address._num << " " << address._road << ", Ward " << address._ward << ", District " << address._dis << ", Ho Chi Minh city";
	return os;
}
