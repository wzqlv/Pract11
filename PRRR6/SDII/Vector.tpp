#include "Vector.h"
#include <iostream>

template <typename T>
Vector<T>::Vector() {
    capacity = 10; // Початкова ємність
    array = new T[capacity]; // Виділяємо пам'ять
    size = 0; // Початковий розмір
}

template <typename T>
Vector<T>::~Vector() {
    delete[] array; // Звільняємо пам'ять
}

template <typename T>
int Vector<T>::getSize() const {
    return size; // Повертаємо розмір
}

template <typename T>
int Vector<T>::getCapacity() const {
    return capacity; // Повертаємо ємність
}

template <typename T>
void Vector<T>::push_back(T element) {
    if (size >= capacity) { // Перевірка на переповнення
        capacity *= 2; // Подвоюємо ємність
        T* newArray = new T[capacity]; // Створюємо новий масив
        for (int i = 0; i < size; i++) {
            newArray[i] = array[i]; // Копіюємо старі елементи
        }
        delete[] array; // Звільняємо старий масив
        array = newArray; // Вказівник на новий масив
    }
    array[size] = element; // Додаємо новий елемент
    size++; // Збільшуємо розмір
}

template <typename T>
void Vector<T>::pop_back() {
    if (size > 0) { // Перевірка, чи є елементи
        size--; // Зменшуємо розмір
    }
}

template <typename T>
T Vector<T>::at(int index) {
    if (index >= 0 && index < size) {
        return array[index]; // Повертаємо елемент за індексом
    }
    throw std::out_of_range("Індекс виходить за межі вектора"); // Виключення, якщо індекс невірний
}

template <typename T>
T& Vector<T>::operator[](int index) {
    if (index >= 0 && index < size) {
        return array[index]; // Повертаємо посилання на елемент за індексом
    }
    throw std::out_of_range("Індекс виходить за межі вектора"); // Виключення, якщо індекс невірний
}
