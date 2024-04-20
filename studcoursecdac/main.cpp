// Q1.Sunbeam have multiple courses.Create an application to handle the admission process.

// Create a class Student with data members name, rollno, mobile

// Create a class called as course with data members course_name, fees

// Student can register for multiple courses so have proper relationship between student and courses.

// A student can take as many courses he wants (use of STL is allowed)

// Write a menu driven code which will have below menus

// 1. Register Student

// 2. Take course

// 3. display specific student’s taken courses

// 4. display all students and their courses registered

//  Also all registered students need to be stored inside the vector.

//  ------------------------------------------------------------------------------------------------------------




#include "./student.h"

int menu()
{
    int choice;
    cout << "----------------------------" << endl;
    cout << "Enter Choice" << endl;
    cout << "0.EXIT" << endl;
    cout << "1.REGIISTER" << endl;
    cout << "2.TAKE COURSE" << endl;
    cout << "3.DISPLAY SPECIFIC" << endl;
    cout << "4.DISPLAY ALL STUDENTS" << endl;
    cout << "----------------------------" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    // Vectors of objects
    vector<Student *> obj;
    int choice;
    int index = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            obj.push_back(new Student);
            try
            {
                obj[index]->accept();
                index++;
            }
            catch (float err)
            {
                cout << "Enter Valid Details" << endl;
            }

            break;
        case 2:
            int roll_call;
            cout << "Enter your Roll Number " << endl;
            cin >> roll_call;
            for (int i = 0; i < obj.size(); i++)
            {
                if (roll_call == obj.at(i)->getRoll())
                {
                    try
                    {
                        obj.at(i)->course();
                    }
                    catch (int error)
                    {
                        cout << "Enter valid details " << endl;
                    }
                }
            }
            break;
        case 3:
            int rollcall;
            cout << "Enter your Roll Number " << endl;
            cin >> rollcall;
            for (int i = 0; i < obj.size(); i++)
            {
                if (rollcall == obj.at(i)->getRoll())
                {
                    obj.at(i)->display();
                }
            }
            break;
        case 4:
            for (int i = 0; i < obj.size(); i++)
            {
                obj.at(i)->display();
            }
            break;
        default:
            break;
        }
    }
    cout << "Thank You For using our App " << endl;
    return 0;
}