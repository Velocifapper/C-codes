//Prakhar bansal
//23070123100

#include<iostream>
using namespace std;
int main()
{
    int x, b = 1;
    cout << "Enter number of rows: ";
    cin >> x;
    for (int y = 0; y < x; y++)
    { 
        for(int z = 0; z <= y; z++)
        { 
            cout << " " << b;
            b++;
        }
        cout << endl;
    }
    return 0;
}
