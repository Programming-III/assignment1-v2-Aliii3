#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person {
public:
string name;
int id;

void display() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
}

};

#endif
