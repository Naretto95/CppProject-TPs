#pragma once
#include <iostream>
#include <string>

enum Encoding{ ASCII, Unicode};
class File
{
private:
    std::string name;
    std::string extension;
    unsigned int size;
public:
    File(const std::string & name, const std::string & extension, unsigned int size) : name{name},extension{extension},size{size}{};
    virtual void afficher() const{ std::cout<< "name : "<<name<< " extension : "<<extension<< " size: "<<size<<std::endl;};
    unsigned int getsize() const {return size;};
    virtual unsigned int getcompressedsize() const = 0;
    virtual bool isvideo() const = 0;
    virtual bool istext() const = 0;
    virtual bool isimage() const = 0;
    virtual ~File() = default;
};
