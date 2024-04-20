#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include<vector>

class Course; // forward declaration (optional)

class Student{

    private:
    string name;
    int rollno;
    string mobile;
    vector<Course*> courses;


    public:
    Student(const string& name,int rollno,const string& mobile,);
    void addCourse(Course* course);
    void displayCourse();
    void dispalydetails();

};

#endif 