#pragma once
#include "RandomIntegerGenerator.h"
#include "Phone.h"

class RandomPhoneGenerator
{
private:
	RandomIntegerGenerator _rng;
public:
	Phone next();
};

