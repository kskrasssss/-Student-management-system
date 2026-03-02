#include "University.h"

University::University() : uniName{ "TBA" }, rating{ 0 } {}

University::University(std::string name) : uniName{ name }, rating{ 1 } {}

University::University(std::string name, int rank) : uniName{ name }, rating{ rank } {
    std::cout << "Constructor: University " << uniName << " ranked #" << rating << std::endl;
}

University::~University() {
    std::cout << "Destructor: University " << uniName << " deleted." << std::endl;
}