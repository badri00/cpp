#include "student.h"
#include "Course.h"
#include <iostream>

using namespace std;

Student::Student(const String& name,int rollno,const string& mobile ):
name(name),rollno(rollno),mobile(mobile){}


void Student::addCourse(Course* course )
{
    courses.push_back(course);

}

void Student::displayCourses(){

    for(const auto& course:courses){
        cout<<course->getCourseName()<<endl;

    }
}

void Student::displayDetails(){

    cout<<"Name- "<<name<<endl;
    cout<<"roll no- "<<rollno<<endl;
    cout<<"mobile: "<<mobile<<endl;
    
}