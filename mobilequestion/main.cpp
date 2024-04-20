//Q1. Create a class Mobile to store mobile_id, mobile name, quantity, and price. Add required methods in the class.

//[10 Marks]

//Q2. Write a Program to store 10 Mobiles details in an array.

//[Note: use Mobile class created in QL.J

//Accept mobile id from user and delete the mobile details from the array. Before deleting the mobile details, show details to user and ask //user do you want to delete it? If user says yes, then delete it otherwise don't delete it. [20 marks]

//Q3. Accept 10 numbers from user and find addition of digits of the number, if it is divisible by 7, otherwise display number as it is.

//[10 marks]




#include<iostream>
#include<string>
#include "Mobile.h"

using namespace std;
int main(){

int n=3;
Mobile arr[n];

for (int i=0;i<n;i++){

arr[i].accept();
cout<<"\n";

}

for(int i=0;i<n;i++){
arr[i].display();
cout<<"\n";
}

int id;
cout<<"enter the mobile id of the mobile you want to delete: "<<endl;
cin>>id;
int choice;
bool key=false;

for(int i=0;i<n;i++){

	if(arr[i].getId()==id){
	key=true;
	arr[i].display();
	cout<<"do you really want to delete this MOBILE ? \n please select 1 to accept or 2 to decline"<<endl;
	cin>>choice;	
	if(choice==1){
	for(int j=i;j<n;j++){
	arr[j]=arr[j+1];
	}	
	cout<<"mobile details of mobile id "<<id<<"are deleted successful!!"<<endl;
	n--;
	}
	}
}
if(!key)
cout<<"moibile id not found"<<endl;
cout<<"\n";
cout<<"Mobiles after deleting desired element are:"<<endl;

for(int i=0;i<n;i++){
arr[i].display();
}

cout<<"Pleasure , doing business with you!"<<endl;

return 0;

}

	






