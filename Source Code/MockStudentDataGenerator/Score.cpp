#include "Score.h"

Score::Score()
{
	_gpa = 0;
}

Score::Score(double gpa)
{
	_gpa = gpa;
}

Score::Score(const Score& score)
{
	_gpa = score._gpa;
}

double Score::GetterScore()
{
	return _gpa;
}

Score Score::operator+(Score gpa)
{
	return _gpa + gpa.GetterScore();
}

bool Score::operator>(Score score)
{
	return _gpa > score._gpa;
}

istream& operator>>(istream& is, Score& score)
{
	is >> score._gpa;
	return is;
}

ostream& operator<<(ostream& os, Score score)
{
	os << setprecision(2) << fixed << score._gpa;
	return os;
}
