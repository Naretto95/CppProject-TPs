#pragma once
#include <iostream>
#include <string>
#include "Employe.h"
class Technicien : public Employe
{
private:
    int nbUnite = 0;
public:
    Technicien() = default;
    Technicien(const std::string & name, const std::string & prenom, const std::string & date, int nbUnite) : Employe(name,prenom,date),nbUnite{nbUnite}{};
    double salaire() const override{return nbUnite*5;};
    std::string getinfo() const override{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+std::to_string(this->salaire());
    };
    friend std::istream & operator>>(std::istream & in, Technicien & p){
				if (!(in >> static_cast<Employe&>(p) >> p.nbUnite)) {
					in.setstate(std::ios::failbit);
				}
				return in;
			};
};
