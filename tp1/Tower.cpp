#include "Tower.h"
#include "Disk.h"
#include <iostream>
#include <string>
#include <vector>

Tower::Tower(std::string name) : name{std::move(name)}{
}

void Tower::pushDisk(Disk d){
    tour.push_back(d);

}

Disk Tower::popDisk(){
    Disk disque = tour.back();
    tour.pop_back();
    return disque;
}

std::string Tower::getname() const{
    return name;
}

std::ostream& operator<<(std::ostream& out, const Tower & p){
    for (size_t i = 0; i < p.tour.size(); i++)
    {
        out << p.name << " diametre disk " << i << " : " << p.tour[i] << std::endl;
    }
    return out;
}
