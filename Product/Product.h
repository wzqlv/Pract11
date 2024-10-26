#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Product {
protected:
    int id;
    string name;
    string manufacturer;
    double price;
    int shelfLife;

public:
    Product(int id = 0, const string& name = "", const string& manufacturer = "", double price = 0.0, int shelfLife = 0);

    int getId() const;
    string getName() const;
    string getManufacturer() const;
    double getPrice() const;
    int getShelfLife() const;

    void setId(int id);
    void setName(const string& name);
    void setManufacturer(const string& manufacturer);
    void setPrice(double price);
    void setShelfLife(int shelfLife);

    void printInfo() const;

    friend istream& operator>>(istream& in, Product& product);
    friend ostream& operator<<(ostream& out, const Product& product);

    bool operator==(const Product& other) const;
};

class Medicine : public Product {
private:
    bool prescriptionRequired;
    vector<string> activeSubstances;

public:
    Medicine(int id = 0, const string& name = "", const string& manufacturer = "", double price = 0.0, int shelfLife = 0, bool prescriptionRequired = false, const vector<string>& activeSubstances = {});

    bool isPrescriptionRequired() const;
    vector<string> getActiveSubstances() const;

    void setPrescriptionRequired(bool prescriptionRequired);
    void setActiveSubstances(const vector<string>& activeSubstances);

    void printInfo() const;

    friend istream& operator>>(istream& in, Medicine& medicine);
    friend ostream& operator<<(ostream& out, const Medicine& medicine);

    bool operator==(const Medicine& other) const;
};

#endif
