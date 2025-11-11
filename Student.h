#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
class Student { 
public:

int yearlevel;
string major;

void displaystudentInfo() {
    cout << "Year Level: " << yearlevel << endl;
    cout << "Major: " << major << endl;
}

};

#endif
