#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, sum;
    cin >> a1 >> a2 >> a3;

    if (a1==a2 && a2==a3) {
        sum = 10000 + a1*1000;
    }
    
    else if ((a1==a2) || (a2==a3) || ( a3==a1)) {
        if (a1==a2) {
            sum = 1000 + a1*100;
        }
        else if (a2==a3) {
            sum = 1000 + a2*100;
        }
        else if (a3==a1) {
            sum = 1000 + a1*100;
        }
    }

    else {
        b1 = (a1 >= a2) ? a1 : a2;
        b2 = (b1 >= a3) ? b1 : a3;
        sum = b2 * 100;
    }

    cout << sum;
}