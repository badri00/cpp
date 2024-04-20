#include<iostream>
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
        static void displayCount(){
            cout<<"count of objects initialized : "<<count<<endl;
        }
        ~Student(){

        }

};
int Student :: count = 0;
int main(){

    Student obj;
    Student::displayCount();
    return 0;
}