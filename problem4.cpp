#include <iostream>
using namespace std;
double fun(double radius) {
    double pi = 3.141592653589793;
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;
    cout<< area <<' '<< circumference;
}

float fun( float a, float b) {
    float perimeter=2*(a+b);
    float area=a*b;
    cout<<perimeter<<' '<<area;
}
int main() {
    float a;
    float b;
    cin >> a >> b;
    fun(a,b);

    return 0;
}