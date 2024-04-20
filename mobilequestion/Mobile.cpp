//Q1. Create a class Mobile to store mobile_id, mobile name, quantity, and price. Add required methods in the class.

//[10 Marks]

//Q2. Write a Program to store 10 Mobiles details in an array.

//[Note: use Mobile class created in QL.J

//Accept mobile id from user and delete the mobile details from the array. Before deleting the mobile details, show details to user and ask //user do you want to delete it? If user says yes, then delete it otherwise don't delete it. [20 marks)

//Q3. Accept 10 numbers from user and find addition of digits of the number, if it is divisible by 7, otherwise display number as it is.

//[10 marks]










#include "Mobile.h"
#include<iostream>
#include<string>

using namespace std;

Mobile::Mobile(int mobile_id,
	string mobile_name,
	int quant,
	double price){

this->mobile_id=mobile_id;
this->mobile_name=mobile_name;
this->quant=quant;
this->price=price;
}
 

int Mobile::getId(){

return mobile_id;
}


void Mobile::accept(){

cout<<"enter mobile id"<<endl;
cin>>mobile_id;
cout<<"enter mobile name"<<endl;
cin>>mobile_name;
cout<<"enter quantity:"<<endl;
cin>>quant;
cout<<"enter price of mobile:"<<endl;
cin>>price;
}


void Mobile::display(){

cout<<"mobile id"<<mobile_id<<endl;
cout<<"mobile name"<<mobile_name<<endl;
cout<<"mobile quantity"<<quant<<endl;
cout<<"mobile price"<<price<<endl;
}
	




























