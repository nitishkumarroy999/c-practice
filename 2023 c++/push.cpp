#include <iostream> //C++ program that calculates the radius of a sphere inscribed in a tetrahedron using the formula
#include <cmath>
using namespace std;

double volume(double a, double b, double c, double d) {
    double p = (a + b + c + d) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c) * (p - d));
}

double radius(double a, double b, double c, double d, double e, double f) {
    double V = volume(a, b, c, d);
    double A = volume(a, b, c, e);
    double B = volume(a, b, d, f);
    double C = volume(a, c, d, e);
    double D = volume(b, c, d, f);
    return (3 * V) / (A + B + C + D);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        double r = radius(a, b, c, d, e, f);
        printf("%.4f\n", r);
    }
    return 0;
}
