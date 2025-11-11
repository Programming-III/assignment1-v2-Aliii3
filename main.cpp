#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person() : name(""), id(0) {}

// ==================== Student Class Implementation ====================
Student::Student() : yearlevel(0), major("") {}

// ==================== Instructor Class Implementation ====================
Instructor::Instructor() : department(""), experienceYears(0) {}

// ==================== Course Class Implementation ====================
Course::Course()
    : courseCode(""), courseTitle(""), maxStudents(0), students(nullptr), currentStudents(0) {}

// ==================== Main Function ====================
int main() {
   Course course;
void setCourseCode(string code) {
    courseCode = code;
}
void setMaxStudents(int max) {
    maxStudents = max;

   course.courseTitle = "Introduction to Programming";
   course.maxStudents = 3;
   course.currentStudents = 1;
   
   Instructor instructor;
   instructor.name = "Dr. Lina Khaled";
   instructor.experienceYears = 5;
   instructor.department = "Computer Science";
   
   Student student;
   student.name = "Omar Nabil";
   student.yearlevel = 2;
   student.major = "Informatics";
    
    return 0;
}
void setCourseTitle(string title) {
    courseTitle = title;
}
};
