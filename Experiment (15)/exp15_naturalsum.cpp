//PRAKHAR BANSAL
//23070123100
# include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        cout<< " Number should be greater than 1"<<endl;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
     return (n+sum(n-1));

    }
}
    int main()
{
    int f,n;
    cout << "Enter a number : "<<endl;
    cin >> n ;

    cout << n <<"Sum of numbers from 1 to "<<n<<" is: "<<" : "<<sum(n) ;
 
}