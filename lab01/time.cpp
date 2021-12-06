#include "time.h"



TimePoint::TimePoint(): hour_(0), minutes_(0), sec_(0) {}

TimePoint::TimePoint(const TimePoint &m): hour_(m.hour_), minutes_(m.minutes_), sec_(m.sec_) {}


TimePoint::TimePoint(const int sec, const int min, const int hour): hour_(hour), minutes_(min), sec_(sec) {}

void TimePoint:: reFresh(){
  if (sec_>=60) {
      minutes_+= sec_/60;
      sec_= sec_%60;
      if (minutes_>=60) {
        hour_+= minutes_/60;
        minutes_= minutes_%60;
        if (hour_>=24) hour_ = hour_%24;
      }
    }
}

//Объект + секунды
TimePoint TimePoint::operator+(const int sec){
    sec_ = sec_ + sec;
    reFresh();
    return *this;
}
//Объект + секунды

int TimePoint:: sec(){
  return hour_*3600+minutes_*60+sec_;
}

int TimePoint:: min (){
  return hour_*60+minutes_;
}

//Объект-секунды
TimePoint TimePoint::operator-(int sec){

    if(sec < sec_+minutes_*60+hour_*3600){
    sec_+= minutes_*60+hour_*3600;
    sec_ = sec_ - sec;
    reFresh();
    }
    return *this;
}
//Объект-секунды



//Во сколько раз отличаются
int TimePoint::operator/(const TimePoint &m){
    int num = 0;
    int s = sec_+minutes_*60+hour_*3600;
    int ms = m.sec_+m.minutes_*60+m.hour_*3600;
    if((s >= ms) && (ms > 0)) {
      num = s / ms;
    }
    if((ms > s) && (s > 0)) {
      num = s / ms;
    }

    return num;
}
//

//Разница
TimePoint TimePoint::operator-(const TimePoint &m){
    sec_ = sec_+minutes_*60+hour_*3600;
    int ms = m.sec_+m.minutes_*60+m.hour_*3600;
    if(sec_ < ms) sec_ = ms - sec_;
    else sec_ = sec_ - ms;
    hour_ = 0;
    minutes_ = 0;
    reFresh();
    return *this;
}
//Разница

//Если больше
bool TimePoint::operator>(const TimePoint &m){
    return sec_+minutes_*60+hour_*3600 > m.sec_+m.minutes_*60+m.hour_*3600;
}
//Если больше

//Если равны
bool TimePoint::operator==(const TimePoint &m){
    return sec_+minutes_*60+hour_*3600 == m.sec_+m.minutes_*60+m.hour_*3600;
}
//Если равны

//Если меньше
bool TimePoint::operator<(const TimePoint &m){
    return sec_+minutes_*60+hour_*3600 < m.sec_+m.minutes_*60+m.hour_*3600;
}
//Если меньше

//Сумма моментов
TimePoint TimePoint::operator+(const TimePoint &m){
    sec_ = sec_+minutes_*60+hour_*3600;
    int ms = m.sec_+m.minutes_*60+m.hour_*3600;
    sec_ = sec_ + ms;
    reFresh();
    return *this;
}
//Сумма моментов

std::istream &operator>>(std::istream &is, TimePoint &object){
    is >> object.sec_;
    return is;
}
