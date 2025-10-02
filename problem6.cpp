#include <iostream>
#include <optional>
#include <string>
using namespace std;
int Factorial(int& n, optional<int>def) {
    if (def.has_value()) {
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            n *= i;

        }
        return n;
    }
}



int main() {
    int *i;
    cin >> *i;
    cout<<Factorial(*i);
}
