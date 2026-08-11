#pragma once
class Time {
    private :
        unsigned short hour;
        unsigned short minute;
        unsigned short second;
    public :
        Time(unsigned short hour, unsigned short minute, unsigned short second);
        unsigned short getHour() const { return hour; };
        unsigned short getMinute() const { return minute; };
        unsigned short getSecond() const { return second; };
        bool operator<(const Time & other) const;
        bool operator==(const Time & other) const;
        bool operator!=(const Time & other) const;
        bool operator>(const Time & other) const;
        bool operator<=(const Time & other) const;
        bool operator>=(const Time & other) const;
        Time& operator ++();
        Time& operator --();
};
