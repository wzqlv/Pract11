#include "productlistdialog.h"
#include "ui_productlistdialog.h"

ProductListDialog::ProductListDialog(const QVector<Product>& products, QWidget *parent)
    : QDialog(parent), ui(new Ui::ProductListDialog) {
    ui->setupUi(this);

    for (const auto& product : products) {
        ui->listWidget->addItem(QString::fromStdString(product.getInfo()));
    }
}

ProductListDialog::~ProductListDialog() {
    delete ui;
}
