#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "5 * 7 = " << 5 * 7 << endl;

    cout << "5 / 7 = " << 5 / 7 << endl;

    cout << "5 + 7 = " << 5 + 7 << endl;

    cout << "5 - 7 = " << 5 - 7 << endl;

    cout << "5 % 7 = " << 5 % 7 << endl;

    int wnum = 5;
    double dnum = 5.5;

    wnum += 80;

    cout << "wnum + dnum = " << wnum + dnum << endl;

    cout << "10.0 / 3.0 = " << 10.0 / 3.0 << endl;

    cout << "power: " << pow(2, 5) << endl;

    cout << "square root: " << sqrt(36) << endl;

    cout << "rounding: " << round(4.3) << endl;

    cout << "ceiling: " << ceil(4.3) << endl;

    cout << "floor: " << ceil(4.6) << endl;

    cout << "fmax: " << fmax(4, 19) << endl;

    cout << "fmin: " << fmin(4, 19) << endl;

    return 0;
}