#ifndef MEDICINEDIALOG_H
#define MEDICINEDIALOG_H

#include <QDialog>
#include "Medicine.h"

namespace Ui {
class MedicineDialog;
}

class MedicineDialog : public QDialog {
    Q_OBJECT

public:
    explicit MedicineDialog(QWidget *parent = nullptr);
    ~MedicineDialog();

    Medicine getMedicine() const;

private slots:
    void onOkButtonClicked();

private:
    Ui::MedicineDialog *ui;
};

#endif // MEDICINEDIALOG_H
