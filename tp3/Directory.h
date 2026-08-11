#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "File.h"
#include "Video.h"

class Directory
{
private:
    std::vector<File *> repertoire;
    std::string name;
public:
    Directory(const std::string & name): name{name}{};
    void add(File * file){repertoire.push_back(file);};
    void afficher() const { for (auto file : repertoire)
    {
        file->afficher();
    }
    };
    unsigned int CompressionMoyen() const {
        if (repertoire.empty())
        {
            return 0;
        }
        unsigned int result=0;
        for (auto file : repertoire)
        {
            result+=file->getcompressedsize();
        }
        return result/repertoire.size();
    };
    unsigned int CompressionMoyenVideo() const {
        unsigned int result=0;
        unsigned int accum=0;
        for (auto file : repertoire)
        {
            if (file->isvideo())
            {
                accum+=1;
                result+=file->getcompressedsize();
            }

        }
        if (accum==0)
        {
            return 0;
        }
        return result/accum;

    };
};
