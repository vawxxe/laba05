
#include <iostream>
#include <cmath>

using namespace std;

double f(const double a, const double b, const double c);

int main()
{
    double s, t;

    cout << "s = ";
    cin >> s;

    cout << "t = ";
    cin >> t;

    double x = f(1, t + s, s);
    double y = f(t, s * t, 1);
    double z = f(s, 1, t);

    double C = (x + y) / (1 + z * z);

    cout << "C = " << C << endl;

    return 0;
}

double f(const double a, const double b, const double c)
{
    return a * sin(b) + b * sin(a) + c * c;
}
