#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;

    if (isMale)
    {
        cout << "You are a male";
    }
    else
    {
        cout << "You are not male";
    }

    isMale = false;

    if (isMale)
    {
        cout << "You are a male";
    }
    else
    {
        cout << "You are not male";
    }

    if (isMale && isTall)
    {
        cout << "You are a tall male";
    }
    else if (isMale || isTall)
    {
        cout << "You are tall or male";
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short male";
    }
    else if (!isMale && isTall)
    {
        cout << "You are not a male but are tall";
    }
    else
    {
        cout << "You are not male and not tall";
    }

    return 0;
}
