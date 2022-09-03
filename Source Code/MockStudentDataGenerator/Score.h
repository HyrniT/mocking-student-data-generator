#pragma once
#include<iomanip>
#include<iostream>
using namespace std;

class Score
{
private:
	double _gpa;
public:
	Score();
	Score(double);
	Score(const Score&);
	double GetterScore();
	friend istream& operator >> (istream&, Score&);
	friend ostream& operator << (ostream&, Score);
	Score operator + (Score);
	bool operator > (Score);
};

