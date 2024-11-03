#include "medicine.h"
#include <sstream>

Medicine::Medicine(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, bool prescriptionRequired, const std::vector<std::string>& activeSubstances)
    : id(id), name(name), manufacturer(manufacturer), price(price), shelfLife(shelfLife), prescriptionRequired(prescriptionRequired), activeSubstances(activeSubstances) {}

std::string Medicine::getInfo() const {
    std::ostringstream oss;
    oss << "ID: " << id << ", Name: " << name << ", Manufacturer: " << manufacturer
        << ", Price: " << price << ", Shelf Life: " << shelfLife << " days, Prescription: "
        << (prescriptionRequired ? "Required" : "Not Required") << ", Active Substances: ";

    for (const auto& substance : activeSubstances) {
        oss << substance << "; ";
    }
    return oss.str();
}
