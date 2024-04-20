/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<fstream>
using namespace std;

class Student{
    private:
        int rollNumber;
        string name;
        static int count;
    public:
        Student(){
            this->rollNumber = 0;
            this->name = "";
            count++;
        }
        Student(int rollNumber,string name){
            this->rollNumber = rollNumber;
            this->name = name;
            count++;
        }
        void accept(){
            cout<<"Enter rollNumber: ";
            cin>>rollNumber;
            cin.get();
            cout<<"Enter name :";
            getline(cin,name);
        }
        void setRollNumber(int rollNumber){
            this->rollNumber = rollNumber;
        }
        void setName(string name){
            this->name = name;
        }
        int getRollNumber(){
            return this->rollNumber;
        }
        string getName(){
            return this->name;
        }
        void display(){
            cout<<"Roll number is :"<<rollNumber<<endl;
            cout<<"Name is :"<<name<<endl;
        }
        static void displayCount(){
            cout<<"count of objects initialized : "<<count<<endl;
        }
        ~Student(){

        }

};
int Student :: count = 0;
int main()
{
    ofstream fileWrite("student.bin",ios::app|ios::binary);
    if(!fileWrite){
        cout<<"File not found"<<endl;
        return -1;
    }
    char ch;
    Student s;
    do{
        s.accept();
        fileWrite.write((char*)(&s),sizeof(Student));
        cout<<"\n Do u want to add more student (y or n)"<<endl;
	    cin>>ch;
	    cin.get();
	}while(ch !='n');
	fileWrite.close();
	ifstream fileRead("Student.bin",ios::binary);
	Student o;
	while(!(fileRead.eof()))
	{
        fileRead.read((char*)&o,sizeof(Student));
		o.display();	
	}
	fileRead.close();
    return 0;
}
