#pragma once
#include <iostream>
#include "File.h"

class Video : public File
{
private:
    unsigned int duration;
public:
    Video(const std::string & name, const std::string & extension, unsigned int size, unsigned int duration):File(name,extension,size),duration{duration}{};
    unsigned int getcompressedsize() const override{ return (duration*80)/100;
    };
    bool isvideo() const override{return true;};
    bool istext() const override{return false;};
    bool isimage() const override{return false;};
    void afficher() const override{ File::afficher(); std::cout <<"duration : "<<duration<<std::endl;};
};
