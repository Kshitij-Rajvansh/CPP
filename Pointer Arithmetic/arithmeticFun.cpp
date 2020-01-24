#include <iostream>
#include "arithmeticFun.h"

using namespace std;

double getMinutesFromSeconds (double seconds)
{
    double minutes = (seconds / 60);
    return minutes;
}

double getMinutesFromHours (double hours)
{
    double minutes = (hours * 60);
    return minutes;
}

double getSecondsFromHours (double hours)
{
    double seconds = (hours * 3600);
    return seconds;
}

double getDaysFromSeconds (double seconds)
{
    double days = (seconds) / (24*3600);
    return days;
}