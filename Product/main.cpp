#include "Product.h"
#include <iostream>

using namespace std;

int main() {
    Medicine medicine1, medicine2;

    cin >> medicine1 >> medicine2;

    cout << "\nMedicine 1 details:\n" << medicine1 << endl;
    cout << "Medicine 2 details:\n" << medicine2 << endl;

    if (medicine1 == medicine2) {
        cout << "\nMedicine 1 is equal to Medicine 2\n";
    } else {
        cout << "\nMedicine 1 is not equal to Medicine 2\n";
    }

    cout << "\nType of medicine1: " << medicine1.getType() << endl;

    return 0;
}
