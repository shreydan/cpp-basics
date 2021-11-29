#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    /*
        manipulators used:
            setprecision - decimal precision, rounds + significant figures
            endl - new line 
            setw - width of output
            setfill - fills empty of setw with something

    */

    double a = 1.42495484;
    cout << setprecision(5) << a << endl;

    string b = "shreyas";
    string c = "daniel";
    cout << setw(10) << b << setw(10) << c << endl;

    int d = 7;
    cout << setw(3) << setfill('0') << d << endl;

}


/*
OUTPUT:

1.425
   shreyas    daniel
007



*/