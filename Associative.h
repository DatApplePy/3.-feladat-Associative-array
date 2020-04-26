#pragma once
#include <string>
#include <vector>

class Assoc_a
{
private:
    struct Item
    {
        int key;
        std::string data;
    };
    std::vector<Item> AT;
public:
    Assoc_a(){}
    ~Assoc_a(){}

    enum Exceptions {RESERVED_KEY, KEY_EXIST_ERROR};

    void setEmpty();
    int Count() const;
    void Insert(const int& ky, const std::string& dt);
    void Erase(const int& ky);
    void operator[](const int& ky) const;

};

