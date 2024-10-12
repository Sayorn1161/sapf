#ifndef STRING_H
#define STRING_H

#include <cstring>

class String {
public:
    String(const char* str = "");
    String(const String& other);
    ~String();

    String& operator=(const String& other);
    String operator+(const String& other) const;

    void print() const;

private:
    char* data;
};

#endif // STRING_H
