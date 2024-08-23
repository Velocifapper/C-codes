//Prakhar bansal
//23070123100

#include<iostream>
using namespace std;
int main()
{
    int total = 0, n;
    cout << "Enter last number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        total = total + i;
    }
    cout << "Sum is: " << total;
    return 0;
}
