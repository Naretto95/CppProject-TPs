#pragma once
#include <iostream>
#include <string>
#include "Employe.h"
class Manutentionnaire : public Employe
{
private:
    int nbheure = 0;
public:
    Manutentionnaire() = default;
    Manutentionnaire(const std::string & name, const std::string & prenom, const std::string & date, int nbUnite) : Employe(name,prenom,date),nbheure{nbUnite}{};
    double salaire() const override{return nbheure*65;};
    std::string getinfo() const override{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+std::to_string(this->salaire());
    };
    friend std::istream & operator>>(std::istream & in, Manutentionnaire & p){
				if (!(in >> static_cast<Employe&>(p) >> p.nbheure)) {
					in.setstate(std::ios::failbit);
				}
				return in;
			};
};
