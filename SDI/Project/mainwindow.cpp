#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Product.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), product(nullptr) {
    ui->setupUi(this);

    connect(ui->createProductButton, &QPushButton::clicked, this, &MainWindow::onCreateProductClicked);
}

MainWindow::~MainWindow() {
    delete ui;
    delete product;
}

void MainWindow::onCreateProductClicked() {
    if (ui->idLineEdit->text().isEmpty() ||
        ui->nameLineEdit->text().isEmpty() ||
        ui->manufacturerLineEdit->text().isEmpty() ||
        ui->priceLineEdit->text().isEmpty() ||
        ui->shelfLifeLineEdit->text().isEmpty() ||
        ui->quantityLineEdit->text().isEmpty() ||
        ui->ingredientsLineEdit->text().isEmpty() ||
        ui->caloriesLineEdit->text().isEmpty()) {

        QMessageBox::warning(this, "Помилка", "Заповніть усі обов'язкові поля!");
        return;
    }

    int id = ui->idLineEdit->text().toInt();
    QString name = ui->nameLineEdit->text();
    QString manufacturer = ui->manufacturerLineEdit->text();
    double price = ui->priceLineEdit->text().toDouble();
    int shelfLife = ui->shelfLifeLineEdit->text().toInt();
    int quantity = ui->quantityLineEdit->text().toInt();
    QString ingredients = ui->ingredientsLineEdit->text();
    int calories = ui->caloriesLineEdit->text().toInt();

    product = new Product(id, name, manufacturer, price, shelfLife, quantity, ingredients, calories);

    QMessageBox::information(this, "Об'єкт створено", product->toString());
}
