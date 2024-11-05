#include "Product.h"

// Реалізація конструктора
Product::Product(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, int quantity, const std::string& ingredients, double calories)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), quantity(quantity), ingredients(ingredients), calories(calories) {}

// Реалізація методу showInfo
void Product::showInfo() const {
    std::cout << "ID: " << id << "\n"
              << "Найменування: " << name << "\n"
              << "Виробник: " << manufacturer << "\n"
              << "Ціна: " << price << " грн\n"
              << "Термін зберігання: " << shelfLife << " днів\n"
              << "Кількість: " << quantity << "\n"
              << "Склад: " << ingredients << "\n"
              << "Калорії на 100 г: " << calories << " ккал\n";
}
