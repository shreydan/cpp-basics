// using operator overloading to add two complex nos.


#include <iostream>
using namespace std;


class Complex {

    public:

        int real, img;

        Complex(int r = 0, int i = 0) {
            cout << "this was invoked" << endl;
            real = r;
            img = i;
        }

        Complex operator + (Complex const &obj) {
           
            /*

                Here:   
                    Complex operator + will take c1
                    and param Complex const &obj will take c2

                using & makes our code efficient by 
                referencing the c2 object instead of 
                making a duplicate object 
                inside the operator function.
                
                using const is considered a good practice
                because it prevents the operator function
                from modifying complex2.

            */
           
            Complex temp;

            // here real, img refer to values of c1
            // obj.real, obj.img refers to values of c2
            // temp is a new obj which will be assigned to c3

            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        void PrintComplex() {
            cout << real << " + (" << img <<")i" << endl;
        }

};


int main() {

    Complex c1(1,2), c2(2,4);
    Complex c3;
    c3 = c1+c2;
    c3.PrintComplex();

    return 0;
}