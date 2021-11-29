#include <iostream>
using namespace std;

class Shreyas {

    public:

        void f1() {
            cout << "haha" <<endl;
        }

        void f1(int a) {
            cout << "haha " << a << endl;
        }

};


int main() {

    Shreyas s;
    s.f1();
    s.f1(5);

    return 0;
}