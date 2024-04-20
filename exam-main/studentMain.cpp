#include "student.h"
#include <iostream>
using namespace std;

int main()
{
    Student *obj = new Student[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> obj[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << obj[i];
    }
}