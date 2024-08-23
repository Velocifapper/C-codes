//Prakhar bansal 
//23070123100

#include<iostream>
#include<string>
using namespace std;
int main ()
{ 
    string p;
    do
    {
        cout << "Enter a password: ";
        cin >> p;
        if (p == "SIT")
        {
            cout << "Success !!";
        }
        else
        {
            cout << "Try again";
        }
    } 
    while (p != "SIT");
    return 0;
}
