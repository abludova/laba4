#include "timer.h"
#include <string>
Timer::Timer(int h, int m)
{
    if(m > 60)
        h+=m/60;
    int hours=h-(h/24)*24;
    int mins=m-(m/60)*60;

    this->hours=hours;
    this->mins=mins;
}

Timer::Timer(std::string str)
{
    int h= std::stoi(str.substr(0,2));
    int m = std::stoi(str.substr(3));

    if(m > 60)
        h+=m/60;
    int hours=h-(h/24)*24;
    int mins=m-(m/60)*60;
    this->hours=hours;
    this->mins=mins;
}

int Timer::getHours() const
{
    return hours;
}


int Timer::getMins() const
{
    return mins;
}

int Timer::operator -(Timer time)
{
    return abs(this->mins - time.mins)+abs(this->hours-time.hours)*60;
}

Timer Timer::operator +( int time)
{
    return Timer(this->hours,this->mins+time);
}


