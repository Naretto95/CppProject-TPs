#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include "representant.h"
#include "Vendeur.h"
#include "Technicien.h"
#include "Manutentionnaire.h"
class Personnel
{
private:
    std::vector<std::unique_ptr<Employe>> liste;
public:
    Personnel() = default;
    size_t size() const{
        return liste.size();
    }
    void ajouter(std::unique_ptr<Employe> e){
        this->liste.push_back(std::move(e));
    }
    void charger(const std::string & fichier){
        std::ifstream ifs(fichier);
        std::string phrase;
        if (ifs)
        {
            while (ifs >> phrase)
            {
                if (phrase=="V")
                {
                    auto v = std::make_unique<Vendeur>();
                    ifs>>*v;
                    this->liste.push_back(std::move(v));
                }
                if (phrase=="R")
                {
                    auto r = std::make_unique<Representant>();
                    ifs>>*r;
                    this->liste.push_back(std::move(r));
                }
                if (phrase=="T")
                {
                    auto t = std::make_unique<Technicien>();
                    ifs>>*t;
                    this->liste.push_back(std::move(t));
                }
                if (phrase=="M")
                {
                    auto m = std::make_unique<Manutentionnaire>();
                    ifs>>*m;
                    this->liste.push_back(std::move(m));
                }
            }
            ifs.close();
        }
    };
    void afficher() const{
        for (const auto & employe : liste)
        {
           std::cout<<employe->getinfo()<<std::endl;
        }
    }
};
