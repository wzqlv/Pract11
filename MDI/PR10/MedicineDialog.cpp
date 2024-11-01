#include "MedicineDialog.h"
#include "ui_MedicineDialog.h"
#include <QMessageBox>

MedicineDialog::MedicineDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::MedicineDialog) {
    ui->setupUi(this);

    connect(ui->okButton, &QPushButton::clicked, this, &MedicineDialog::onOkButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &MedicineDialog::reject);
}

MedicineDialog::~MedicineDialog() {
    delete ui;
}

void MedicineDialog::onOkButtonClicked() {
    if (ui->idLineEdit->text().isEmpty() ||
        ui->nameLineEdit->text().isEmpty() ||
        ui->manufacturerLineEdit->text().isEmpty() ||
        ui->priceLineEdit->text().isEmpty() ||
        ui->shelfLifeLineEdit->text().isEmpty() ||
        ui->activeIngredientsTextEdit->toPlainText().isEmpty()) {

        QMessageBox::warning(this, "Помилка", "Введіть в усі поля!");
        return;
    }

    accept();
}

Medicine MedicineDialog::getMedicine() const {
    int id = ui->idLineEdit->text().toInt();
    QString name = ui->nameLineEdit->text();
    QString manufacturer = ui->manufacturerLineEdit->text();
    double price = ui->priceLineEdit->text().toDouble();
    int shelfLife = ui->shelfLifeLineEdit->text().toInt();
    bool isPrescriptionRequired = ui->prescriptionCheckBox->isChecked();
    QStringList activeIngredientsList = ui->activeIngredientsTextEdit->toPlainText().split(",");

    std::vector<std::string> activeIngredients;
    for (const auto& ingredient : activeIngredientsList) {
        activeIngredients.push_back(ingredient.trimmed().toStdString());
    }

    return Medicine(id, name.toStdString(), manufacturer.toStdString(), price,
                    shelfLife, isPrescriptionRequired, activeIngredients);
}
