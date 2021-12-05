#ifndef TIME_H
#define TIME_H
#include <iostream>



class TimePoint
{
public:
    TimePoint();
    TimePoint(const TimePoint &m);
    TimePoint(const int sec);
    TimePoint(const int sec, const int min, const int hour);

    TimePoint operator+(int sec);
    TimePoint operator-(int sec);

 


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
    int data_;
};


#endif 