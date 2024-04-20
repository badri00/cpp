#include "student.h"
#include<iostream>
#include<string.h>
using namespace std;

Student :: Student():rollNumber(0),name(""){
    courses = new string[5];
    count++;
}
Student :: Student(int rollNumber,string name,int coursesSize):rollNumber(rollNumber),name(name){
    this->coursesSize = coursesSize;
    courses = new string[coursesSize];
    count++;
}
Student :: Student(const Student& copyObject){
    this->rollNumber = copyObject.rollNumber;
    this->name = copyObject.name;
    this->coursesSize = copyObject.coursesSize;
    this->courses = new string[coursesSize];
    for(int i=0;i<this->coursesSize;i++){
        this->courses[i] = copyObject.courses[i];
    }
}
void Student :: accept(){
    cout<<"Enter roll Number : ";
    cin>>rollNumber;
    cout<<"Enter name :";
    cin.get();
    getline(cin,name);
    cout<<"Enter how many courses do you have : "<<endl;
    cin>>this->coursesSize;
    cin.get();
    for(int i=0;i<coursesSize;i++){
        cout<<"Enter course name :"<<endl;
        // cin.get();
        getline(cin,courses[i]);
    }

}
void Student :: setRollNumber(int rollNumber){
    this->rollNumber = rollNumber;
}
void Student :: setName(string name){
    this->name = name;
}
int Student :: getRollNumber(){
    return this->rollNumber;
}
string Student :: getName(){
    return this->name;
}
void Student :: displayCount(){
    cout<<"Total Objects are created : "<<count<<endl;
}
ostream& operator<<(ostream& os,Student& object){
    os<<"Roll Number is : "<<object.rollNumber<<endl;
    os<<"Name is :"<<object.name<<endl;
    os<<"Your courses are : "<<endl;
    for(int i=0;i<object.coursesSize;i++){
        os<<object.courses[i]<<endl;
    }
    return os;
}
istream& operator>>(istream& is, Student& object) {
    cout << "Enter roll Number: ";
    is >> object.rollNumber;
    cout << "Enter name: ";
    is.ignore();
    getline(is, object.name);
    cout << "Enter number of courses: ";
    is >> object.coursesSize;
    is.ignore();
    object.courses = new string[object.coursesSize];
    for (int i = 0; i < object.coursesSize; ++i) {
        cout << "Enter course " << (i + 1) << ": ";
        getline(is, object.courses[i]);
    }
    return is;
}
void Student :: display(){
    cout<<"Roll Number is : "<<rollNumber<<endl;
    cout<<"Name is :"<<name<<endl;
    cout<<"Your courses are : "<<endl;
    for(int i=0;i<coursesSize;i++){
        cout<<courses[i]<<endl;
    }
}
Student :: ~Student(){
    delete [] courses;
}
int Student :: count = 0;