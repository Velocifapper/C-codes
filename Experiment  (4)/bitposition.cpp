//Prakhar Bansal
//23070123100

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> b;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> c;
    cout << a << " in binary is " << bitset<8>(a) << endl;
   
    int d = a | (1 << b);
    cout << "Result after setting bit number " << b << " is " << bitset<8>(d) << endl;
    // d = num_set

    int e = d & ~(1 << c);
    cout << "Result after resetting bit number " << c << " is " << bitset<8>(e) << endl;
    // e = num_reset
    
    return 0;
}
