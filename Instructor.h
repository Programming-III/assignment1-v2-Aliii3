#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Instructor  {
public:
    string department;
    int experienceYears;

void displayteacherInfo() {
    cout << "Department: " << department << endl;
    cout << "Years of Experience: " << experienceYears << endl;
};


};

#endif
