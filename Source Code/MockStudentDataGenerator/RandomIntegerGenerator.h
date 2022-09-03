#pragma once
#include<cstdlib>
#include<time.h>
class RandomIntegerGenerator
{
public:
	RandomIntegerGenerator();
	int next();
	int next(int);
	int next(int, int);
};


