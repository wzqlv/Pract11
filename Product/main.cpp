#include "Product.h"

int main() {
    Product object1, object2, object3;

    cin >> object1 >> object2 >> object3;

    cout << "\nProduct 1 details:" << endl;
    object1.printInfo();

    cout << "\nProduct 2 details:" << endl;
    object2.printInfo();

    cout << "\nProduct 3 details:" << endl;
    object3.printInfo();

    return 0;
}
