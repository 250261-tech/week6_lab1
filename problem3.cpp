#include <iostream>
using namespace std;
double fun(double radius) {
    double pi = 3.141592653589793;
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;
    cout<< area <<' '<< circumference;
}
int main() {
    double radius;
    cin >> radius;
    fun(radius);
    return 0;
}