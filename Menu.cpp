#include <iostream>
#include <string>
#include "Menu.h"

void Menu::run()
{
    int v = 0;
    do
    {
        menuWrite();
        std::cin >> v;
        std::cout << std::endl;
        switch(v)
        {
            case 1: case1(); break;
            case 2: case2(); break;
            case 3: case3(); break;
            case 4: case4(); break;
            case 5: case5(); break;
        }
    }
    while (v != 0);
}
//--------------------------------------------------
void Menu::menuWrite()
{
    std::cout << "0 - Exit\n";
    std::cout << "1 - Insert\n";
    std::cout << "2 - Erase\n";
    std::cout << "3 - setEmpty\n";
    std::cout << "4 - Count\n";
    std::cout << "5 - Operator[]\n";
    std::cout << "Select: ";
}
//--------------------------------------------------
void Menu::case1()
{
    int key;
    std::string data;
    std::cin >> key >> data;
    AssT.Insert(key,data);
    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case2()
{
    int key;
    std::cin >> key;
    AssT.Erase(key);
    std::cout << std::endl;
}
//--------------------------------------------------
void Menu::case3()
{
    AssT.setEmpty();
    std::cout << "A tomb nullazva!" << std::endl;
}
//--------------------------------------------------
void Menu::case4()
{
    std::cout << "A tombben " << AssT.Count() << " elem van." << std::endl;
}
//--------------------------------------------------
void Menu::case5()
{
    int key;
    std::cin >> key;
    AssT[key];
    std::cout << std::endl;
}
