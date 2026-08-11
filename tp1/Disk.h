#pragma once
#include <iostream>

class Disk{
	private :
		int diameter;
	public :
		Disk(int diameter);
        int getdiameter() const;
	friend std::ostream& operator<<(std::ostream& out, const Disk & p);
};
