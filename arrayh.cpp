#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
public:
    Array();
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);
    Array operator+(const Array& other) const;
    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;

    void add(const T& element);
    void print() const;

private:
    T* data;
    std::size_t size;
    std::size_t capacity;

    void resize();
};

#include "Array.cpp"

#endif // ARRAY_H
