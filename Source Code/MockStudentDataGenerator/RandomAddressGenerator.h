#pragma once
#include "RandomIntegerGenerator.h"
#include "Address.h"

class RandomAddressGenerator
{
private:
	RandomIntegerGenerator _rng;
public:
	Address next();
};

