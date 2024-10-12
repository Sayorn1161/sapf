#include "String.h"
#include <iostream>

String::String(const char* str) {
    data = new char[std::strlen(str) + 1];
    std::strcpy(data, str);
}

String::String(const String& other) {
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
}

String::~String() {
    delete[] data;
}

String& String::operator=(const String& other) {
    if (this == &other)
        return *this;

    delete[] data;
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);

    return *this;
}

String String::operator+(const String& other) const {
    char* newData = new char[std::strlen(data) + std::strlen(other.data) + 1];
    std::strcpy(newData, data);
    std::strcat(newData, other.data);

    String newString(newData);
    delete[] newData;
    return newString;
}

void String::print() const {
    std::cout << data << std::endl;
}
