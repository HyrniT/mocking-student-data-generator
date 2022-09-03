#include "RandomScoreGenerator.h"

Score RandomScoreGenerator::next()
{
	double temp = (double)(_rng.next(300, 1000) / 100.00);
	Score score(temp);
	return score;
}