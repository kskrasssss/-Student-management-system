#pragma once

#include <string>
#include <iostream>

class Course {
private:
    std::string title;
    int credits;

public:
    Course();
    Course(std::string t, int c);
    ~Course();
    void showCourse();
};