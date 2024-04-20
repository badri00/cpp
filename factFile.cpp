#include <iostream>
#include <fstream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    if (num == 0 || num == 1)
        fact = 1;

    for (int i = 1; i <= num; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n = 10, num[10], facto[10],i;
    cout << "Enter the 10 numbers:"<<endl;
    for ( i = 0; i < n; i++)
    {   
    cout<<"Enter "<<i+1<<" number:"; 
    cin >> num[i];
    facto[i] =  factorial(num[i]);
    cout << "factorial of number "<<num[i]<<" is:" <<facto[i]<<endl ;
    }
     
    string fname;
    cout<<"Enter the file name:";
    cin>>fname;
    ofstream fout;
    fout.open(fname,ios::out);
    for(i=0;i<n;i++)
    fout<<num[i]<<","<<facto[i]<<endl;
    cout<<"Numbers are written in file";
    fout.close();


    return 0;
}