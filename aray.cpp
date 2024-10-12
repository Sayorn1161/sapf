#include "Array.h"
#include <iostream>

template <typename T>
Array<T>::Array() : data(nullptr), size(0), capacity(0) {}

template <typename T>
Array<T>::Array(const Array& other) : data(new T[other.capacity]), size(other.size), capacity(other.capacity) {
    for (std::size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this == &other)
        return *this;

    delete[] data;
    size = other.size;
    capacity = other.capacity;
    data = new T[capacity];

    for (std::size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }

    return *this;
}

template <typename T>
Array<T> Array<T>::operator+(const Array& other) const {
    Array<T> result;
    result.size = size + other.size;
    result.capacity = capacity + other.capacity;
    result.data = new T[result.capacity];

    for (std::size_t i = 0; i < size; ++i) {
        result.data[i] = data[i];
    }
    for (std::size_t i = 0; i < other.size; ++i) {
        result.data[size + i] = other.data[i];
    }

    return result;
}

template <typename T>
T& Array<T>::operator[](std::size_t index) {
    return data[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const {
    return data[index];
}

template <typename T>
void Array<T>::add(const T& element) {
    if (size == capacity) {
        resize();
    }
    data[size++] = element;
}

template <typename T>
void Array<T>::resize() {
    capacity = (capacity == 0) ? 1 : capacity * 2;
    T* newData = new T[capacity];

    for (std::size_t i = 0; i < size; ++i) {
        newData[i] = data[i];
    }

    delete[] data;
    data = newData;
}

template <typename T>
void Array<T>::print() const {
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}
