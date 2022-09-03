#pragma once
#include "RandomIntegerGenerator.h"
#include "Name.h"

class RandomNameGenerator
{
private:
	RandomIntegerGenerator _rng;
public:
	Name next();
};

