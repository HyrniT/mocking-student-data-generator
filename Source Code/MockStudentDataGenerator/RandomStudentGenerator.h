/*
#pragma once
#include "Student.h"
#include "Random.h"

class RandomStudentGenerator
{
private:
	RandomNameGenerator _rng_name;
	RandomScoreGenerator _rng_score;
	RandomPhoneGenerator _rng_phone;
	RandomDateGenerator _rng_date;
	RandomAddressGenerator _rng_address;
public:
	Student next();
};

*/
#pragma once
#include "Student.h"
#include "Random.h"

class RandomStudentGenerator
{
private:
	RandomNameGenerator _rng_name;
	RandomScoreGenerator _rng_score;
	RandomPhoneGenerator _rng_phone;
	RandomDateGenerator _rng_date;
	RandomAddressGenerator _rng_address;
public:
	Student next(int);
};

