#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

using namespace std;

class Product {
private:
    int id;
    string name;
    string manufacturer;
    double price;
    int shelfLife;
    int quantity;
    string composition;
    double calories;

public:

    Product(int id = 0, const string& name = "", const string& manufacturer = "", double price = 0.0, int shelfLife = 0, int quantity = 0, const string& composition = "", double calories = 0.0);

    int getId() const;
    string getName() const;
    string getManufacturer() const;
    double getPrice() const;
    int getShelfLife() const;
    int getQuantity() const;
    string getComposition() const;
    double getCalories() const;

    void setId(int id);
    void setName(const string& name);
    void setManufacturer(const string& manufacturer);
    void setPrice(double price);
    void setShelfLife(int shelfLife);
    void setQuantity(int quantity);
    void setComposition(const string& composition);
    void setCalories(double calories);

    void printInfo() const;

    friend istream& operator>>(istream& in, Product& product);

    friend ostream& operator<<(ostream& out, const Product& product);
};

#endif
