#ifndef PRODUCTLISTDIALOG_H
#define PRODUCTLISTDIALOG_H

#include <QDialog>
#include <QVector>
#include "Product.h"

namespace Ui {
class ProductListDialog;
}

class ProductListDialog : public QDialog {
    Q_OBJECT

public:
    explicit ProductListDialog(const QVector<Product>& products, QWidget *parent = nullptr);
    ~ProductListDialog();

private:
    Ui::ProductListDialog *ui;
};

#endif
