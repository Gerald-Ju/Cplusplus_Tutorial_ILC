#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main()
{
    sayHi("Mike", 13);
    sayHi("Tom", 23);

    return 0;
}

void sayHi(string name, int age)
{
    cout << "Hello " << name << endl;
    cout << "You are " << age;
}
