#include <iostream>
#include "Associative.h"
#include "Menu.h"

using namespace std;

int main()
{
    try
    {
        Menu x;
        x.run();
    }
    catch(Assoc_a::Exceptions error)
    {
        if (error == Assoc_a::RESERVED_KEY)
        {
            cout << "A kulcs foglalt" << endl;
        }
        if (error == Assoc_a::KEY_EXIST_ERROR)
        {
            cout << "A kulcs nem letezik" << endl;
        }
    }

    return 0;
}
