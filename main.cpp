#include <iostream>

#include "Student.h"
#include "Course.h"
#include "University.h"

int main() {
    std::cout << "--- Creating Objects ---" << std::endl;

    Student s1("Olena", 20, 4.8);
    Student s2;

    Course c1;

    University u1("KPI", 1);

    std::cout << "\n--- Displaying Info ---" << std::endl;
    s1.displayInfo();
    c1.showCourse();

    return 0;
}