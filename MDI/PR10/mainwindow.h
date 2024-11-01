#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "product.h"
#include "medicine.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onAddProduct();
    void onAddMedicine();
    void onShowProductList();
    void onShowMedicineList();
    void onExit();

private:
    Ui::MainWindow *ui;
    QVector<Product> products;
    QVector<Medicine> medicines;
};

#endif // MAINWINDOW_H
