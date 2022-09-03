#pragma once
#include "RandomIntegerGenerator.h"
#include "Score.h"

class RandomScoreGenerator
{
private:
	RandomIntegerGenerator _rng;
public:
	Score next();
};

