#include "employee.h"
#include <iostream>
using namespace std;

Employee ::Employee() : empId(0), name("")
{
}
Employee ::Employee(int empId, string name) : empId(empId), name(name)
{
}
void Employee :: accept(){
    cout<<"Enter emp id : ";
    cin>>empId;
    cout<<"Enter name :";
    cin.get();
    getline(cin,name);
}
void Employee :: setEmpId(int empId){
    this->empId = empId;
}
void Employee :: setName(string name){
    this->name = name;
}
int Employee :: getEmpId(){
    return this->empId;
}
string Employee :: getName(){
    return this->name;
}
void Employee :: display(){
    cout<<"Emp id is :"<<empId<<endl;
    cout<<"Name is : "<<name<<endl;
}
Employee :: ~Employee(){

}