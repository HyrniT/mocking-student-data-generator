#pragma once
#include "RandomIntegerGenerator.h"
#include "Date.h"

class RandomDateGenerator
{
private:
	RandomIntegerGenerator _rng;
public:
	Date next();
};
