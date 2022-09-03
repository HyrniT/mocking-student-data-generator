#include "RandomDateGenerator.h"

Date RandomDateGenerator::next()
{
    int year = _rng.next(1998, 2003);
    int month = _rng.next(1, 12);
    int day = _rng.next(1, Date::dayOfMonth(month, year));
    Date date(day, month, year);
    return date;
}