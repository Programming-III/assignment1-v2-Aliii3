#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

class Course {
private:

    string courseCode;
    string courseTitle;
    int maxStudents;
    Student* students; 
    int currentStudents;
public:
    Course()
        : courseCode(), courseTitle(), maxStudents(0), students(nullptr), currentStudents(0) {}

    void displayCourseInfo() const {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Title: " << courseTitle << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Current Enrolled Students: " << currentStudents << endl;
    }

    void addStudent(const Student& student) {
        if (currentStudents < maxStudents) {
            students[currentStudents++] = student;
        } else {
            cout << "Cannot add more students, course is full." << endl;
        }
    }
};

#endif
