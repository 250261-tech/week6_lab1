#include <iostream>
#include <optional>
#include <string>
using namespace std;
int Factorial(int n) {

        for (int i = 1; i <= n; i++) {
            n *= i;

        }
        return n;

}
int Factorial() {
    return 1;
}


int main() {
    int i;
    cin >> i;
    cout<<Factorial(i);
    return 0;
}
