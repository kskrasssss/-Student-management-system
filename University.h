#pragma once

#include <iostream>
#include <string>
class University {
private:
    std::string uniName;
    int rating;

public:
    University();
    University(std::string name);
    University(std::string name, int rank);
    ~University();
};


