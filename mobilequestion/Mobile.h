//Q1. Create a class Mobile to store mobile_id, mobile name, quantity, and price. Add required methods in the class.

//[10 Marks]

//Q2. Write a Program to store 10 Mobiles details in an array.

//[Note: use Mobile class created in QL.J

//Accept mobile id from user and delete the mobile details from the array. Before deleting the mobile details, show details to user and ask //user do you want to delete it? If user says yes, then delete it otherwise don't delete it. [20 marks)

//Q3. Accept 10 numbers from user and find addition of digits of the number, if it is divisible by 7, otherwise display number as it is.

//[10 marks]



#ifndef MOBILE_H
#define MOBILE_H

#include<string>
#include<iostream>

using namespace std;

class Mobile
{
private:
	int mobile_id;
	string mobile_name;
	int quant;
	double price;
	
public:
	Mobile(){};
	Mobile(int,string ,int ,double );
	void accept();
	void display();
	int getId();
};

#endif

