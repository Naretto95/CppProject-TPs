#include <iostream>
#include "Disk.h"

Disk::Disk(int diameter) : diameter{diameter}{

}

int Disk::getdiameter() const{
    return diameter;
}

std::ostream& operator<<(std::ostream& out, const Disk & p){
    out << p.diameter << std::endl;
    return out;
}
