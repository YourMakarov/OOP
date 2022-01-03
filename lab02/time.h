#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <string>
#include <cstring>


class TimePoint
{
public:
    TimePoint();
    TimePoint(const TimePoint &m);
    TimePoint(const int sec, const int min, const int hour);

    TimePoint operator+(int sec);
    TimePoint operator-(int sec);
    void reFresh();
    
 


    TimePoint operator+(const TimePoint &number);
    TimePoint operator-(const TimePoint &number);
    
    int operator/(const TimePoint &number);
    TimePoint operator%(const TimePoint &number);

    bool operator==(const TimePoint &number);
    bool operator>(const TimePoint &number);
    bool operator<(const TimePoint &number);

    int sec();
    int min();

    friend std::istream &operator>>(std::istream &is, TimePoint &object);
    

private:
    int sec_;
    int minutes_;
    int hour_;
};



TimePoint operator "" _sec(unsigned long long time);
TimePoint operator "" _min(unsigned long long time);
TimePoint operator "" _hour(unsigned long long time);
#endif 