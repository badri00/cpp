#include "Mobile.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n = 3;
    Mobile arr[n];
    int i = 0;

    for (i = 0; i < n; i++)
    {

        arr[i].Accept();
        cout << "\n";
    }
    for (i = 0; i < n; i++)
    {
        arr[i].Display();
    }
    int id;
    cout << "Enter the mobile id of the mobile to be deleted:";
    cin >> id;
    int opinion;
    bool key = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i].getId() == id)
        {
            key = true;
            arr[i].Display();
            cout << "Do you realy want to delete details?\nPress 1-Yes 2-No" << endl;
            cin >> opinion;
            if (opinion == 1)
            {
                for (int j = i; j < n - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }

                cout << "Mobile details of mobile with id " << id << " are deleted succesfully:" << endl;
                n--;
            }
        }
    }
    if (!key)
        cout << "Mobile id not found" << endl;
    cout << "\n";
    cout << "Mobiles after deleting desired element are:" << endl;
    for (i = 0; i < n; i++)
        arr[i].Display();

    cout << "bye!!!!";
    return 0;
}