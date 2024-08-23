#include<iostream>
using namespace std;
void staticExample()
{
int a = 0;
a++;
cout<<"the value of a is: "<<a<<endl;
}
int main()
{
staticExample();
staticExample();
return 0;
}