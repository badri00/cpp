#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;
#include <vector>

class Course
{
    string course_name;
    double fees;

public:
    Course();
    Course(string course_name, double fees);
    void accept();
    void display();
};

class Student
{
    string name;
    int rollno;
    int mobile;
    int temp;
    // Here Association is loosely coupled because there can be various possibilities...
    Course *obj;

public:
    Student();
    Student(string name, int rollno, int mobile);
    void accept();
    void display();
    int getRoll();
    void course();
};

#endif