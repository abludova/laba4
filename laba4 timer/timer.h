#ifndef TIME_H
#define TIME_H
#include <string>
#include <qDebug>
class Timer
{
public:
    explicit Timer(int h, int m);
    Timer(std::string str);

    int getHours() const;
    int getMins() const;
    int operator -(Timer time);
    Timer operator +(int time);

private:
    int hours;
    int mins;

};

#endif // TIME_H
