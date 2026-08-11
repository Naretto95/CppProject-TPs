#include <iostream>
#include <stdexcept>
#include "Time.h"

int main()
{
    Time t(23, 59, 58);
    ++t;
    ++t;
    std::cout << "after two increments from 23:59:58 (rolls to 00:00:00): "
              << t.getHour() << ":" << t.getMinute() << ":" << t.getSecond() << std::endl;

    Time zero(0, 0, 0);
    try
    {
        --zero;
    }
    catch (const std::out_of_range & e)
    {
        std::cout << "caught expected exception: " << e.what() << std::endl;
    }

    return 0;
}
