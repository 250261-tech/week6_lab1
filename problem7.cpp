#include <iostream>
using namespace std;
int gcd(int num1, int num2) {
    if (num1 < num2) {
        int c = num1;
        bool divisible = false;
        while (divisible==false) {
            if (num2%c==0 and num1%c==0) {
                divisible = true;
            }
            else {
                c-=1;
            }

        }
        return c;

    }
    else if (num2 < num1) {
        int c = num2;
        bool divisible = false;
        while (divisible==false) {
            if (num1%c==0 and num2%c==0) {
                divisible = true;
            }
            else {
                c-=1;
            }
        }
        return c;
    }
    else {
        return num1;
    }
}
int main() {
    int a,b;
    cin >> a >> b;
    cout<<gcd(a, b)<<endl;
    return 0;
}