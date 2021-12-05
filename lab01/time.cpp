#include "time.h"



TimePoint::TimePoint(): data_(0) {}

TimePoint::TimePoint(const TimePoint &m): data_(m.data_) {}

TimePoint::TimePoint(const int a): data_(a) {}

TimePoint::TimePoint(const int sec, const int min, const int hour): data_(sec + min*60 +hour*3600) {}

//Объект + секунды
TimePoint TimePoint::operator+(const int sec){
    data_ = data_ + sec;
    return *this;
}
//Объект + секунды

int TimePoint:: sec (){
  return data_;
}

int TimePoint:: min (){
  return data_ / 60;
}

//Объект-секунды
TimePoint TimePoint::operator-(int sec){
    if(data_ > sec){
    data_ = data_ - sec;
    }
    return *this;
}
//Объект-секунды



//Во сколько раз отличаются
int TimePoint::operator/(const TimePoint &moment){
    int num = 0;
    if((data_ >= moment.data_) && (moment.data_ > 0)) {
      num = data_ / moment.data_;
    }
    if((moment.data_ > data_) && (data_ > 0)) {
      num = data_ / moment.data_;
    }

    return num;
}
//

//Разница
TimePoint TimePoint::operator-(const TimePoint &moment){
    if(data_ < moment.data_) data_ = moment.data_ - data_;
    else data_ = data_ - moment.data_;
    return *this;
}
//Разница

//Если больше
bool TimePoint::operator>(const TimePoint &moment){
    return data_ > moment.data_;
}
//Если больше

//Если равны
bool TimePoint::operator==(const TimePoint &moment){
    return (data_ == moment.data_);
}
//Если равны

//Если меньше
bool TimePoint::operator<(const TimePoint &moment){
    return data_ < moment.data_;
}
//Если меньше

//Сумма моментов
TimePoint TimePoint::operator+(const TimePoint &moment){
    data_ = data_ + moment.data_;
    return *this;
}
//Сумма моментов
std::istream &operator>>(std::istream &is, TimePoint &object){
    is >> object.data_;
    return is;
}
