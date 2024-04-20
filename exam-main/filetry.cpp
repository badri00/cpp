#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    Student() : rollNumber(0), name("") {}
    Student(int rollNumber, const string& name) : rollNumber(rollNumber), name(name) {}

    void accept() {
        cout << "Enter rollNumber: ";
        cin >> rollNumber;
        cin.get();
        cout << "Enter name: ";
        getline(cin,name);
    }

    void display() const {
        cout << "Roll number: " << rollNumber << ", Name: " << name << endl;
    }

    // Serialization
    void serialize(ofstream& outFile) const {
        outFile.write(reinterpret_cast<const char*>(&rollNumber), sizeof(rollNumber));
        size_t nameLength = name.size();
        outFile.write(reinterpret_cast<const char*>(&nameLength), sizeof(nameLength));
        outFile.write(name.c_str(), nameLength);
    }

    // Deserialization
    void deserialize(ifstream& inFile) {
        inFile.read(reinterpret_cast<char*>(&rollNumber), sizeof(rollNumber));
        size_t nameLength;
        inFile.read(reinterpret_cast<char*>(&nameLength), sizeof(nameLength));
        char buffer[256];
        inFile.read(buffer, nameLength);
        buffer[nameLength] = '\0';
        name = buffer;
    }
};

int main() {
    // Writing to file
    {
        ofstream fileWrite("student.bin",ios::app| ios::binary);
        if (!fileWrite) {
            cout << "Error opening file for writing." << endl;
            return -1;
        }
        char ch;
        do {
            Student s;
            s.accept();
            s.serialize(fileWrite);
            cout << "\nDo you want to add more students? (y/n): ";
            cin >> ch;
        } while (ch != 'n');
    }

    // Reading from file
    {
        ifstream fileRead("student.bin", ios::binary);
        if (!fileRead) {
            cout << "Error opening file for reading." << endl;
            return -1;
        }
        while (!fileRead.eof()) {
            Student s;
            s.deserialize(fileRead);
            s.display();
        }
    }

    return 0;
}
