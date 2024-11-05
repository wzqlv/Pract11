#include <iostream>
#include "Vector.h"
#include "Product.h" // Додаємо заголовок для Product

using namespace std;

int main() {
    system("chcp 65001");

    Vector<Product*> productVector; // Вектор для зберігання об'єктів Product
    int numProducts;

    cout << "Введіть кількість продуктів: ";
    cin >> numProducts;
    cin.ignore(); // Очищення буфера після вводу числа

    for (int i = 0; i < numProducts; i++) {
        int id, shelfLife, quantity;
        double price, calories;
        string name, manufacturer, ingredients;

        cout << "Введіть інформацію про продукт " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> id;
        cin.ignore();

        cout << "Назва: ";
        getline(cin, name);

        cout << "Виробник: ";
        getline(cin, manufacturer);

        cout << "Ціна (грн): ";
        cin >> price;
        cin.ignore();

        cout << "Термін зберігання (дні): ";
        cin >> shelfLife;
        cin.ignore();

        cout << "Кількість: ";
        cin >> quantity;
        cin.ignore();

        cout << "Склад: ";
        getline(cin, ingredients);

        cout << "Калорії на 100 г: ";
        cin >> calories;
        cin.ignore();

        // Створюємо новий продукт та додаємо до вектора
        Product* product = new Product(id, name, manufacturer, price, shelfLife, quantity, ingredients, calories);
        productVector.push_back(product);
    }

    // Виводимо інформацію про всі продукти
    for (int i = 0; i < productVector.getSize(); i++) {
        productVector[i]->showInfo(); // Викликаємо метод showInfo для кожного продукту
        cout << "--------------------------" << endl; // Роздільник для виводу
    }

    // Очищення пам'яті
    for (int i = 0; i < productVector.getSize(); i++) {
        delete productVector[i]; // Звільняємо пам'ять для кожного продукту
    }

    return 0;
}
