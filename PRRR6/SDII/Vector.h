#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>

template <typename T>
class Vector {
private:
    T* array; // Вказівник на масив
    int size; // Поточний розмір вектора
    int capacity; // Ємність вектора

public:
    Vector(); // Конструктор
    ~Vector(); // Деструктор
    int getSize() const; // Повертає поточний розмір
    int getCapacity() const; // Повертає ємність
    void push_back(T element); // Додає елемент
    void pop_back(); // Видаляє останній елемент
    T at(int index); // Повертає елемент за індексом
    T& operator[](int index); // Оператор доступу за індексом
};

// Включаємо реалізацію шаблонів
#include "Vector.tpp"

#endif // VECTOR_H
