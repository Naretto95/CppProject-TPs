#pragma once
#include <iostream>
#include "File.h"

class Text : public File
{
private:
    Encoding encoding;
public:
    Text(const std::string & name, const std::string & extension, unsigned int size, Encoding encoding):File(name,extension,size),encoding{encoding}{};
    unsigned int getcompressedsize() const override{
        if (encoding==ASCII)
        {
            return getsize()/2;
        }else
        {
            return (getsize()*60)/100;
        }
    };
    bool isvideo() const override{return false;};
    bool istext() const override{return true;};
    bool isimage() const override{return false;};
    void afficher() const override{ File::afficher(); std::cout <<"encoding : "<<encoding<<std::endl;};
};
