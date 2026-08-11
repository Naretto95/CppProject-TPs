#include "Time.h"
#include <iostream>
#include <stdexcept>

Time::Time(unsigned short hour, unsigned short minute, unsigned short second) : hour{hour} , minute{minute}, second{second}{
}

bool Time::operator<(const Time & other) const{
    return ((hour*3600 + minute*60 + second)<(other.hour*3600 + other.minute*60 + other.second));
}

bool Time::operator<=(const Time & other) const{
    return (*this==other || *this<other);
}

bool Time::operator>=(const Time & other) const{
    return (*this==other || *this>other);
}

bool Time::operator>(const Time & other) const{
    return (!(*this < other)&& *this!=other );
}

bool Time::operator==(const Time & other) const{
    return (hour==other.hour && minute==other.minute && second==other.second);
}

bool Time::operator!=(const Time & other) const{
    return !(*this == other);
}

Time& Time::operator++(){
    if (second<59)
    {
        this->second=second+1;
    }else if (minute<59)
    {
        this->second=0;
        this->minute=minute+1;
    }else{
        this->second=0;
        this->minute=0;
        this->hour=hour+1;
    }
    return *this;
}

Time& Time::operator--(){
    if (*this <= Time(0,0,0)) {
        throw std::out_of_range("Time::operator--: cannot decrement below 00:00:00");
    }
    if (second>0)
    {
        this->second=second-1;
    }else if (minute>0)
    {
        this->second=59;
        this->minute=minute-1;
    }else{
        this->second=59;
        this->minute=59;
        this->hour=hour-1;
    }
    return *this;
}
