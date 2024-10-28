#include "Product.h"

Product::Product(int id, const QString &name, const QString &manufacturer, double price, int shelfLife,
                 int quantity, const QString &ingredients, int calories)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), quantity(quantity),
    ingredients(ingredients), calories(calories) {}

QString Product::toString() const {
    return QString("ID: %1\nName: %2\nManufacturer: %3\nPrice: $%4\nShelf Life: %5 days\nQuantity: %6\nIngredients: %7\nCalories (per 100g): %8 kcal")
    .arg(id)
        .arg(name)
        .arg(manufacturer)
        .arg(price)
        .arg(shelfLife)
        .arg(quantity)
        .arg(ingredients)
        .arg(calories);
}
