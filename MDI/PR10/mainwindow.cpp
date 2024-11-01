#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "productdialog.h"
#include "medicinedialog.h"
#include "productlistdialog.h"
#include "medicinelistdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->addProductButton, &QPushButton::clicked, this, &MainWindow::onAddProduct);
    connect(ui->addMedicineButton, &QPushButton::clicked, this, &MainWindow::onAddMedicine);
    connect(ui->showProductListButton, &QPushButton::clicked, this, &MainWindow::onShowProductList);
    connect(ui->showMedicineListButton, &QPushButton::clicked, this, &MainWindow::onShowMedicineList);
    connect(ui->exitButton, &QPushButton::clicked, this, &MainWindow::onExit);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onAddProduct() {
    ProductDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        products.append(dialog.getProduct());
    }
}

void MainWindow::onAddMedicine() {
    MedicineDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        medicines.append(dialog.getMedicine());
    }
}

void MainWindow::onShowProductList() {
    ProductListDialog dialog(products, this);
    dialog.exec();
}

void MainWindow::onShowMedicineList() {
    MedicineListDialog dialog(medicines, this);
    dialog.exec();
}

void MainWindow::onExit() {
    close();
}
