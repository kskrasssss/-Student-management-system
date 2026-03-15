#include "Course.h"

Course::Course() : Course("General Education", 3) {}

Course::Course(std::string t, int c) : title{ t }, credits{ c } {
    std::cout << "Constructor: Course " << title << " initialized." << std::endl;
}

Course::~Course() {
    std::cout << "Destructor: Course " << title << " closed." << std::endl;
}

void Course::showCourse() {
    std::cout << "Course: " << title << " (" << credits << " credits)" << std::endl;
}