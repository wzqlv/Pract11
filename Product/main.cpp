#include "Product.h"
#include <iostream>

using namespace std;

int showMenu() {
    int choice;
    cout << "\nВиберіть клас для створення об'єкта:\n";
    cout << "1. Medicine\n";
    cout << "Ваш вибір: ";
    cin >> choice;
    return choice;
}

int main() {
    Product* products[5];
    int choice;

    for (int i = 0; i < 5; ++i) {
        choice = showMenu();

        switch (choice) {
        case 1: {
            products[i] = new Medicine();
            cin >> *products[i];
            break;
        }
        default:
            cout << "Невірний вибір. Спробуйте знову.\n";
            --i;
            break;
        }
    }


    cout << "\nДані про створені об'єкти:\n";
    for (int i = 0; i < 5; ++i) {
        cout << *products[i] << endl;
        delete products[i];
    }

    return 0;
}
