// Prakhar bansal
// 23070123100

#include<iostream>
using namespace std;
int main ()
{
    int x;
    cout << "Enter number of rows: ";
    cin >> x;
    for (int y = 0; y < x; y++)
    { 
        for (int z = x - 1; z > y; z--)
        {
            cout << " ";
        }
        for(int w = 0; w < 2 * y + 1; w++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
