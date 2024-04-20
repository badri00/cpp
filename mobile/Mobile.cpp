#include "Mobile.h"
#include <iostream>
#include <string>
using namespace std;

Mobile::Mobile(int id, string name, int quant, double price)
{
    this->id = id;
    this->name = name;
    this->quant = quant;
    this->price = price;
}
int Mobile::getId()
{
    return id;
}

void Mobile::Accept()
{
    cout << "Enter the mobile id:";
    cin >> id;
    cout << "Enter the mobile name:";
    cin >> name;
    cout << "Enter the quantity:";
    cin >> quant;
    cout << "Enter the price:";
    cin >> price;
}

void Mobile::Display()
{
    cout << "Mobile id:" << id << endl;
    cout << "Mobile name:" << name << endl;
    cout << "Mobile quantity:" << quant << endl;
    cout << "Mobile price:" << price << endl;
}
