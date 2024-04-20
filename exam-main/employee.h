#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee
{
private:
    int empId;
    string name;

public:
    Employee();
    Employee(int,string);
    void accept();
    void setEmpId(int);
    void setName(string);
    int getEmpId();
    string getName();
    void display();
    ~Employee();
};
#endif