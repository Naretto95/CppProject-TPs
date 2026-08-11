#pragma once
#include <iostream>
#include <string>
class Employe
{
protected:
    std::string nom;
    std::string prenom;
    std::string date;
public:
    Employe() = default;
    Employe(const std::string & nom, const std::string & prenom, const std::string & date) : nom{nom},prenom{prenom},date{date}{};
    virtual double salaire()const=0;
    virtual std::string getinfo()const=0;
    friend std::istream & operator>>(std::istream & in, Employe & p){
				if (!(in >> p.nom >>p.prenom>> p.date)) {
					in.setstate(std::ios::failbit);
				}
				return in;
			};
    friend std::ostream & operator<<(std::ostream & out, const Employe & p){
			out << p.getinfo() <<std::endl;
			return out;
		};
    virtual ~Employe() = default;
};
