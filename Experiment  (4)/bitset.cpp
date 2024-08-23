#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"x|y: "<<bitset<4>(x|y)<<endl;
    cout<<"x&y: "<<bitset<4>(x&y)<<endl;
    cout<<"x<<y: "<<bitset<4>(x<<y)<<endl;
    cout<<"xy: "<<bitset<4>(x>>y)<<endl;
    cout<<"~y: "<<bitset<4>(~y)<<endl;
    cout<<"x^y: "<<bitset<4>(x^y)<<endl;
    return 0;
}
