#pragma once
#include <iostream>
#include <string>
class Student {
private:
    std::string name;
    int age;
    double gpa;

public:
    Student(std::string n = "Unknown student", int a = 18, double g = 0.0);


    ~Student();


    void displayInfo() const;
};