#ifndef PRODUCTDIALOG_H
#define PRODUCTDIALOG_H

#include <QDialog>
#include "Product.h"

namespace Ui {
class ProductDialog;
}

class ProductDialog : public QDialog {
    Q_OBJECT

public:
    explicit ProductDialog(QWidget *parent = nullptr);
    ~ProductDialog();

    Product getProduct() const;

private slots:
    void onOkButtonClicked();

private:
    Ui::ProductDialog *ui;
};

#endif
