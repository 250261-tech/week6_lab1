#include <iostream>
using namespace std;
void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}