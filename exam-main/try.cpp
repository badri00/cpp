#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    static int count;

public:
    Student() : rollNumber(0), name("") {
        count++;
    }

    Student(int rollNumber, string name) : rollNumber(rollNumber), name(name) {
        count++;
    }

    void accept() {
        cout << "Enter rollNumber: ";
        cin >> rollNumber;
        cin.ignore(); // Ignore newline character
        cout << "Enter name: ";
        getline(cin, name);
    }

    void display() const {
        cout << "Roll number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }

    static void displayCount() {
        cout << "Count of objects initialized: " << count << endl;
    }

    ~Student() {}

    friend ostream& operator<<(ostream& os, const Student& student);
    friend istream& operator>>(istream& is, Student& student);
};

int Student::count = 0;

ostream& operator<<(ostream& os, const Student& student) {
    os << student.rollNumber << ' ' << student.name;
    return os;
}

istream& operator>>(istream& is, Student& student) {
    is >> student.rollNumber;
    is.ignore(); // Ignore whitespace
    getline(is, student.name);
    return is;
}

int main() {
    fstream file("student.bin", ios::in | ios::out | ios::binary); 
    if(!file){
        cout<<"File not found"<<endl;
        return -1;
    }
    char ch;
    Student s;
    do{
        s.accept();
        file.write((char*)(&s),sizeof(Student));
        cout<<"\n Do u want to add more student (y or n)"<<endl;
	    cin>>ch;
	    cin.get();
	}while(ch !='n');
  file.seekg(0);
  file.read("Student.bin",ios::binary);
	Student o;
	while(!(file.eof()))
	{
        file.read((char*)&o,sizeof(Student));
		o.display();	
	}
	file.close();
    return 0;
}
