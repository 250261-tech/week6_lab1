#include <iostream>
using namespace std;
int cubeOfDigits(int number) {
    string s = to_string(number);
    int l=s.length();
    int t=10;
    int j=1;
    int sum=0;
    for (int i = 0; i < l; i++) {
            sum=sum+(number%t/j)*(number%t/j)*(number%t/j);
            t*=10;
            j*=10;
        }
    return sum;
    }

void isArmstrong(int sum,int number) {

    if (sum==number) {
        cout<<"It is Armstrong integer";
    }
    else {
        cout<<"It is not Armstrong integer";
    }
}
int main() {
    int n;
    cin>>n;
    isArmstrong(cubeOfDigits(n),n);
    return 0;
}