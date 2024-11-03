#ifndef MEDICINELISTDIALOG_H
#define MEDICINELISTDIALOG_H

#include <QDialog>
#include <QVector>
#include "medicine.h"

namespace Ui {
class MedicineListDialog;
}

class MedicineListDialog : public QDialog {
    Q_OBJECT

public:
    explicit MedicineListDialog(const QVector<Medicine>& medicines, QWidget *parent = nullptr);
    ~MedicineListDialog();

private:
    Ui::MedicineListDialog *ui;
};

#endif // MEDICINELISTDIALOG_H
