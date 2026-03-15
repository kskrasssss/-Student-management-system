#include "Student.h"

Student::Student(std::string n, int a, double g) : name{ n }, age{ a }, gpa{ g } {
	std::cout << "Constructor: Student " << name << " created." << std::endl;
}

Student::~Student() {
	std::cout << "Destructor: Student " << name << " removed." << std::endl;
}

void Student::displayInfo() const {
	std::cout << "Student: " << name << ", age: " << age << ", gpa: " << gpa << std::endl;