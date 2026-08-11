#pragma once
#include <iostream>
#include <string>
#include "Employe.h"
class Commercial : public Employe
{
protected:
    double chiffreAffaire = 0.0;
public:
    Commercial() = default;
    Commercial(const std::string & name, const std::string & prenom, const std::string & date, double chiffreAffaire) : Employe(name,prenom,date),chiffreAffaire{chiffreAffaire}{};
    friend std::istream & operator>>(std::istream & in, Commercial & p){
				if (!(in >> static_cast<Employe&>(p) >> p.chiffreAffaire)) {
					in.setstate(std::ios::failbit);
				}
				return in;
			};
};
