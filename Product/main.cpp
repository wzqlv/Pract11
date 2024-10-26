#include "Product.h"
#include <iostream>

using namespace std;

int main() {
    Product product1, product2;
    Medicine medicine1, medicine2;

    cin >> product1 >> product2;

    cin >> medicine1 >> medicine2;

    cout << "\nProduct 1 details:\n" << product1 << endl;
    cout << "Product 2 details:\n" << product2 << endl;

    cout << "\nMedicine 1 details:\n" << medicine1 << endl;
    cout << "Medicine 2 details:\n" << medicine2 << endl;

    if (product1 == product2) {
        cout << "\nProduct 1 is equal to Product 2\n";
    } else {
        cout << "\nProduct 1 is not equal to Product 2\n";
    }

    if (medicine1 == medicine2) {
        cout << "\nMedicine 1 is equal to Medicine 2\n";
    } else {
        cout << "\nMedicine 1 is not equal to Medicine 2\n";
    }

    return 0;
}
