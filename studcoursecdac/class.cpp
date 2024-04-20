#include "./student.h"

Course::Course()
{
    course_name = "";
    fees = 0;
}
Course::Course(string course_name, double fees)
{
    this->course_name = course_name;
    this->fees = fees;
}
void Course::accept()
{
    cout << "Enter Course Name :: " << endl;
    cin >> this->course_name;
    cout << "Enter Fees :: " << endl;
    cin >> this->fees;
}

void Course::display()
{
    cout << "Course Name :: " << this->course_name << endl;
    cout << "Fees :: " << this->fees << endl;
}

Student::Student()
{
    name = "";
    rollno = 0;
    mobile = 0;
}
Student::Student(string name, int rollno, int mobile)
{
    this->name = name;
    this->rollno = rollno;
    this->mobile = mobile;
}
void Student::accept()
{
    cout << "----------------------------" << endl;
    cout << "Enter Name :: " << endl;
    cin >> this->name;
    cout << "Enter Roll No :: " << endl;
    cin >> this->rollno;
    if (rollno < 0)
    {
        throw 1.1;
    }
    cout << "Enter Mob No :: " << endl;
    cin >> this->mobile;
    cout << "----------------------------" << endl;
    // obj.accept();
}
void Student::display()
{
    cout << "----------------------------" << endl;
    cout << "Name :: " << this->name << endl;
    cout << "Roll No :: " << this->rollno << endl;
    cout << "Mobile Number :: " << this->mobile << endl;
    for (int i = 0; i < temp; i++)
    {
        obj[i].display();
    }
    cout << "----------------------------" << endl;
}
int Student::getRoll()
{
    return this->rollno;
}
void Student::course()
{
    int index = 0;
    cout << "Enter How Many Courses you want ?" << endl;
    cin >> temp;
    if (temp < 0)
    {
        throw 1;
    }
    obj = new Course[temp];
    for (int i = 0; i < temp; i++)
    {
        obj[i].accept();
    }
}