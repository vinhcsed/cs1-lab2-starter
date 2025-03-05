#include <iostream>
#include <iomanip>
using namespace std;

float x = 3.00;
float y = 15.73;
float z = x + y;

float a, b;
float c = a + b;

int main() {

// Part 1: Vertical Output

    cout << fixed
         << setprecision(2)
         << setw(7);

    cout << x << endl;
    cout << "+ " << y << endl;
    cout << "-------" << endl;
    cout << "  " << z << endl;

// Part 2: Interactive Input

    cout << fixed
         << setprecision(2)
         << setw(7);

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b; 

    cout << "  " <<  a << endl;
    cout << "+ " << b << endl;
    cout << "-------" << endl;
    cout << " " << c << endl;

    return 0;

}