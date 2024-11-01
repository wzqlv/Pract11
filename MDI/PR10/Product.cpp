#include "product.h"

Product::Product(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, int quantity, const std::string& composition, int calories)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), quantity(quantity), composition(composition), calories(calories) {}

std::string Product::getInfo() const {
    return "ID: " + std::to_string(id) + ", Name: " + name + ", Manufacturer: " + manufacturer +
           ", Price: " + std::to_string(price) + ", Shelf Life: " + std::to_string(shelfLife) + " days, Quantity: " +
           std::to_string(quantity) + ", Composition: " + composition + ", Calories: " + std::to_string(calories) + " kcal";
}
