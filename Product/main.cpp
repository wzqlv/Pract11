#include "Product.h"
#include <iostream>

using namespace std;

int main() {
    Product object1, object2, object3;

    cin >> object1 >> object2 >> object3;

    cout << "\nProduct 1 details:" << endl << object1 << endl;
    cout << "\nProduct 2 details:" << endl << object2 << endl;
    cout << "\nProduct 3 details:" << endl << object3 << endl;

    if (object1 == object2) {
        cout << "\nProduct 1 is equal to Product 2" << endl;
    } else {
        cout << "\nProduct 1 is not equal to Product 2" << endl;
    }

    if (object2 == object3) {
        cout << "\nProduct 2 is equal to Product 3" << endl;
    } else {
        cout << "\nProduct 2 is not equal to Product 3" << endl;
    }

    return 0;
}
