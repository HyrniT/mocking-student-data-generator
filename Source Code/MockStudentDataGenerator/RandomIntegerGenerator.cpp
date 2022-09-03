#include "RandomIntegerGenerator.h"

RandomIntegerGenerator::RandomIntegerGenerator()
{
	srand(time(NULL));
}

int RandomIntegerGenerator::next()
{
	int result = rand();
	return result;
}

int RandomIntegerGenerator::next(int ceiling)
{
	int result = rand() % ceiling;
	return result;
}

int RandomIntegerGenerator::next(int min, int max)
{
	int result = min + rand() % (max + 1 - min);
	return result;
}