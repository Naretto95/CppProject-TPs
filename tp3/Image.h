#pragma once
#include <iostream>
#include "File.h"

class Image : public File
{
private:
    unsigned int width;
    unsigned int height;
public:
    Image(const std::string & name, const std::string & extension, unsigned int size, unsigned int width, unsigned int height):File(name,extension,size),width{width},height{height}{};
    unsigned int getcompressedsize() const override{ return (width*height)/2;
    };
    bool isvideo() const override{return false;};
    bool istext() const override{return false;};
    bool isimage() const override{return true;};
    void afficher() const override{ File::afficher(); std::cout <<"width : "<<width<< " heigth : "<<height<<std::endl;};
};
