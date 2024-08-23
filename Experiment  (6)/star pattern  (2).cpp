// Prakhar bansal
// 23070123100

#include<iostream>
using namespace std;
int main ()
{ 
    int x;
    cout << "Enter number of rows: ";
    cin >> x;
    for(int y = 0; y <= x - 1; y++)
    { 
        for (int z = 0; z <= x - 1; z++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}
