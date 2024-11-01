#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, int quantity, const std::string& composition, int calories);

    std::string getInfo() const;

private:
    int id;
    std::string name;
    std::string manufacturer;
    double price;
    int shelfLife;
    int quantity;
    std::string composition;
    int calories;
};

#endif // PRODUCT_H
