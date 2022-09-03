#include "RandomPhoneGenerator.h"

Phone RandomPhoneGenerator::next()
{
	string temp = "09";
	for (int i = 0; i < 8; i++)
	{
		temp += to_string(_rng.next(0, 9));
	}
	temp.insert(4, "-");
	temp.insert(8, "-");
	Phone phone(temp);
	return phone;
}