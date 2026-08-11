#pragma once
#include <iostream>
#include <string>
#include "Commercial.h"
class Representant : public Commercial
{
public:
    Representant() = default;
    Representant(const std::string & name, const std::string & prenom, const std::string & date, double chiffreAffaire) : Commercial(name,prenom,date,chiffreAffaire){};
    double salaire() const override{return chiffreAffaire*0.2 + 800;};
    std::string getinfo() const override{
        return "nom : "+nom+" prenom : "+prenom+" date : "+date+" salaire : "+std::to_string(this->salaire());
    };
};
