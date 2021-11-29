#include <iostream>
using namespace std;


class Shreyas {

    public:

        Shreyas() {
            cout << "invoked default constructor" << endl;
        }

        Shreyas(int age) {
            cout << "Parametrized contructor, age: " << age << endl;
        }

};


int main() {

    Shreyas s1;
    Shreyas s2(20);

    return 0;
}