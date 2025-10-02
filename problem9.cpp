#include <iostream>
using namespace std;
float sum(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float product(float a, float b) {
    return a * b;
}
float division(float a, float b) {
    return a / b;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<"Sum: "<<sum(a,b)<<endl;
    cout<<"Subtract: "<<subtract(a,b)<<endl;
    cout<<"Product: "<<product(a,b)<<endl;
    cout<<"Division: "<<division(a,b)<<endl;
    return 0;
}