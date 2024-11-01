#include "medicinelistdialog.h"
#include "ui_medicinelistdialog.h"

MedicineListDialog::MedicineListDialog(const QVector<Medicine>& medicines, QWidget *parent)
    : QDialog(parent), ui(new Ui::MedicineListDialog) {
    ui->setupUi(this);

    for (const auto& medicine : medicines) {
        ui->listWidget->addItem(QString::fromStdString(medicine.getInfo()));
    }
}

MedicineListDialog::~MedicineListDialog() {
    delete ui;
}
