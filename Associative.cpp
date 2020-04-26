#include <iostream>
#include <vector>
#include <string>
#include "Associative.h"

void Assoc_a::setEmpty()
{
    AT.clear();
}

int Assoc_a::Count() const
{
     return AT.size();
}

void Assoc_a::Insert(const int& ky, const std::string& dt)
{
    bool r_key = false;
    for (unsigned int i = 0; i < AT.size(); ++i)
    {
        if (AT[i].key == ky)
        {
            throw RESERVED_KEY;
        }
    }

    AT.push_back(Item());
    AT[AT.size()-1].key = ky;
    AT[AT.size()-1].data = dt;

}

void Assoc_a::Erase(const int& ky)
{
    bool k_exst = false;
    for (unsigned int i = 0; i < AT.size(); ++i)
    {
        if (AT[i].key == ky)
        {
            k_exst = true;
            AT.erase(AT.begin()+i);
            break;
        }
    }
    if (!k_exst)
    {
        throw KEY_EXIST_ERROR;
    }
}

void Assoc_a::operator[](const int& ky) const
{
    bool k_exst = false;
    for (unsigned int i = 0; i < AT.size(); ++i)
    {
        if (AT[i].key == ky)
        {
            k_exst = true;
            std::cout << AT[i].key << " " << AT[i].data << std::endl;
            break;
        }
    }
    if(!k_exst)
    {
        throw KEY_EXIST_ERROR;
    }
}

