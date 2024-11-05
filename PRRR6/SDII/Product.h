#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    int id;
    std::string name;
    std::string manufacturer;
    double price;
    int shelfLife; // термін зберігання в днях
    int quantity;
    std::string ingredients; // склад продукту
    double calories; // кількість калорій на 100 г

public:
    // Конструктор
    Product(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, int quantity, const std::string& ingredients, double calories);

    // Метод для виведення інформації про продукт
    void showInfo() const;
};

#endif // PRODUCT_H
