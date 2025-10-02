#include <iostream>

using namespace std;
void displayEven(int number) {
    string s = to_string(number);
    int l=s.length();
    int t=10;
    int j=1;
    for (int i = 0; i < l; i++) {
        if (number%t/j%2==0) {
            cout<<number%t/j<<" ";
            t*=10;
            j*=10;
        }
    }
}
int main() {
    int n;
    cin>>n;
    displayEven(n);
}