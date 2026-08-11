#pragma once
#include <iostream>
#include "Disk.h"
#include <string>
#include <vector>

class Tower{
	private :
		std::string name;
        std::vector<Disk> tour;
	public :
		Tower(std::string name);
        void pushDisk(Disk d);
        Disk popDisk();
        std::string getname() const;
	friend std::ostream& operator<<(std::ostream& out, const Tower & p);
};
