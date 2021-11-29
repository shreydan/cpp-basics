#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int *p;
    p = &arr[0];

    for(int i=0;i<5;i++,p++) {
        cout << "Enter element " << i << " : ";
        cin >> *p;
        cout << endl;
    }

    for(int i=0;i<5;i++) {
        cout << arr[i] << endl;
    }

    return 0;
}