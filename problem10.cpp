#include <iostream>
using namespace std;
float getTriangularNumber(float n) {
    return n*(n+1)/2;
}
int main() {
    int c=1;
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= 5; j++) {
            cout<<getTriangularNumber(c)<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}