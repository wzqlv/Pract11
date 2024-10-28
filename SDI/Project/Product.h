#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product {
private:
    int id;
    QString name;
    QString manufacturer;
    double price;
    int shelfLife;
    int quantity;
    QString ingredients;
    int calories;

public:
    Product(int id, const QString &name, const QString &manufacturer, double price, int shelfLife,
            int quantity, const QString &ingredients, int calories);

    QString toString() const;
};

#endif
