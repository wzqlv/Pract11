#include "ProductDialog.h"
#include "ui_ProductDialog.h"
#include <QMessageBox>

ProductDialog::ProductDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::ProductDialog) {
    ui->setupUi(this);

    connect(ui->okButton, &QPushButton::clicked, this, &ProductDialog::onOkButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &ProductDialog::reject);
}

ProductDialog::~ProductDialog() {
    delete ui;
}

void ProductDialog::onOkButtonClicked() {
    if (ui->idLineEdit->text().isEmpty() ||
        ui->nameLineEdit->text().isEmpty() ||
        ui->manufacturerLineEdit->text().isEmpty() ||
        ui->priceLineEdit->text().isEmpty() ||
        ui->shelfLifeLineEdit->text().isEmpty() ||
        ui->quantityLineEdit->text().isEmpty() ||
        ui->caloriesLineEdit->text().isEmpty()) {

        QMessageBox::warning(this, "Помилка", "Введіть в усі поля!");
        return;
    }

    accept();
}

Product ProductDialog::getProduct() const {
    int id = ui->idLineEdit->text().toInt();
    QString name = ui->nameLineEdit->text();
    QString manufacturer = ui->manufacturerLineEdit->text();
    double price = ui->priceLineEdit->text().toDouble();
    int shelfLife = ui->shelfLifeLineEdit->text().toInt();
    int quantity = ui->quantityLineEdit->text().toInt();
    QString ingredients = ui->ingredientsTextEdit->toPlainText();
    int calories = ui->caloriesLineEdit->text().toInt();

    return Product(id, name.toStdString(), manufacturer.toStdString(), price,
                   shelfLife, quantity, ingredients.toStdString(), calories);
}
