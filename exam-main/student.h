#ifndef STUDENT_H
#define STUDENT_H

#include<string>
using namespace std;
class Student{
    private:
        int rollNumber;
        string name;
        string *courses;
        int coursesSize;
        static int count;
    public:
        Student();
        Student(int,string,int);
        Student(const Student&);
        void accept();
        void setRollNumber(int);
        void setName(string);
        int getRollNumber();
        string getName();
        friend ostream& operator<<(ostream& os,Student&object);
        friend istream& operator>>(istream& is,Student& object);
        void display();
        static void displayCount();
        ~Student();
};
#endif