#include <iostream>

using namespace std;

int main()
{
    int index = 1;

    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    int num = 1;

    do
    {
        cout << index << endl;
        index++;
    } while (num <= 5);

    return 0;
}