#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14;
    int radius;
    cout << "Please Enter radius: ";
    cin >> radius;
    double area = pow(radius, 2) * pi;

    cout << "Area of Circle: " << area;

    return 0;
}