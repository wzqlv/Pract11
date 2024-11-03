#ifndef MEDICINE_H
#define MEDICINE_H

#include <string>
#include <vector>

class Medicine {
public:
    Medicine(int id, const std::string& name, const std::string& manufacturer, double price, int shelfLife, bool prescriptionRequired, const std::vector<std::string>& activeSubstances);

    std::string getInfo() const;

private:
    int id;
    std::string name;
    std::string manufacturer;
    double price;
    int shelfLife;
    bool prescriptionRequired;
    std::vector<std::string> activeSubstances;
};

#endif // MEDICINE_H
