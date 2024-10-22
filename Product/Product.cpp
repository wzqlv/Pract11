#include "Product.h"

Product::Product(int id, const string& name, const string& manufacturer, double price, int shelfLife, int quantity, const string& composition, double calories)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), quantity(quantity), composition(composition), calories(calories) {}

int Product::getId() const { return id; }
string Product::getName() const { return name; }
string Product::getManufacturer() const { return manufacturer; }
double Product::getPrice() const { return price; }
int Product::getShelfLife() const { return shelfLife; }
int Product::getQuantity() const { return quantity; }
string Product::getComposition() const { return composition; }
double Product::getCalories() const { return calories; }

void Product::setId(int id) { this->id = id; }
void Product::setName(const string& name) { this->name = name; }
void Product::setManufacturer(const string& manufacturer) { this->manufacturer = manufacturer; }
void Product::setPrice(double price) { this->price = price; }
void Product::setShelfLife(int shelfLife) { this->shelfLife = shelfLife; }
void Product::setQuantity(int quantity) { this->quantity = quantity; }
void Product::setComposition(const string& composition) { this->composition = composition; }
void Product::setCalories(double calories) { this->calories = calories; }

void Product::printInfo() const {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Price: $" << price << endl;
    cout << "Shelf Life: " << shelfLife << " days" << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Composition: " << composition << endl;
    cout << "Calories (per 100g): " << calories << " kcal" << endl;
}


istream& operator>>(istream& in, Product& product) {
    cout << "Enter product details:" << endl;
    cout << "ID: ";
    in >> product.id;
    cout << "Name: ";
    in.ignore();
    getline(in, product.name);
    cout << "Manufacturer: ";
    getline(in, product.manufacturer);
    cout << "Price: ";
    in >> product.price;
    cout << "Shelf Life (days): ";
    in >> product.shelfLife;
    cout << "Quantity: ";
    in >> product.quantity;
    cout << "Composition: ";
    in.ignore();
    getline(in, product.composition);
    cout << "Calories (per 100g): ";
    in >> product.calories;

    return in;
}
