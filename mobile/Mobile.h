#ifndef MOBILE_H
#define MOBILE_H
#include<iostream>
#include<string>
using namespace std;
class Mobile
{

private:
    int id;
    string name;
    int quant;
    double price;

public:
    Mobile(){};
    Mobile(int , string , int , double );
    void Accept();
    void Display();
    int getId();
};
#endif