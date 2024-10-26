#include "Product.h"

Product::Product(int id, const string& name, const string& manufacturer, double price, int shelfLife)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife) {}

int Product::getId() const { return id; }
string Product::getName() const { return name; }
string Product::getManufacturer() const { return manufacturer; }
double Product::getPrice() const { return price; }
int Product::getShelfLife() const { return shelfLife; }

void Product::setId(int id) { this->id = id; }
void Product::setName(const string& name) { this->name = name; }
void Product::setManufacturer(const string& manufacturer) { this->manufacturer = manufacturer; }
void Product::setPrice(double price) { this->price = price; }
void Product::setShelfLife(int shelfLife) { this->shelfLife = shelfLife; }

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
    return in;
}

ostream& operator<<(ostream& out, const Product& product) {
    product.printInfo();
    return out;
}

bool Product::operator==(const Product& other) const {
    return id == other.id &&
           name == other.name &&
           manufacturer == other.manufacturer &&
           price == other.price &&
           shelfLife == other.shelfLife;
}

Medicine::Medicine(int id, const string& name, const string& manufacturer, double price, int shelfLife, bool prescriptionRequired, const vector<string>& activeSubstances)
    : Product(id, name, manufacturer, price, shelfLife), prescriptionRequired(prescriptionRequired), activeSubstances(activeSubstances) {}

bool Medicine::isPrescriptionRequired() const { return prescriptionRequired; }
vector<string> Medicine::getActiveSubstances() const { return activeSubstances; }

void Medicine::setPrescriptionRequired(bool prescriptionRequired) { this->prescriptionRequired = prescriptionRequired; }
void Medicine::setActiveSubstances(const vector<string>& activeSubstances) { this->activeSubstances = activeSubstances; }

void Medicine::printInfo() const {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Price: $" << price << endl;
    cout << "Shelf Life: " << shelfLife << " days" << endl;
    cout << "Prescription Required: " << (prescriptionRequired ? "Yes" : "No") << endl;
    cout << "Active Substances: ";
    for (const string& substance : activeSubstances) {
        cout << substance << " ";
    }
    cout << endl;
}

string Medicine::getType() const {
    return "Medicine";
}

istream& operator>>(istream& in, Medicine& medicine) {
    in >> static_cast<Product&>(medicine);
    cout << "Is prescription required (1 - Yes, 0 - No): ";
    in >> medicine.prescriptionRequired;
    int numSubstances;
    cout << "Enter number of active substances: ";
    in >> numSubstances;
    in.ignore();
    medicine.activeSubstances.clear();
    for (int i = 0; i < numSubstances; ++i) {
        string substance;
        cout << "Substance " << (i + 1) << ": ";
        getline(in, substance);
        medicine.activeSubstances.push_back(substance);
    }
    return in;
}

ostream& operator<<(ostream& out, const Medicine& medicine) {
    medicine.printInfo();
    return out;
}

bool Medicine::operator==(const Medicine& other) const {
    return static_cast<const Product&>(*this) == static_cast<const Product&>(other) &&
           prescriptionRequired == other.prescriptionRequired &&
           activeSubstances == other.activeSubstances;
}
