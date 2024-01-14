#include <iostream>
using namespace std;

int main() {
    int sum, t;
    cin >> sum;
    cin >> t;

    int p, n, sum1= 0;
    for (int i = 1; i<=t; i++) {
        cin >> p >> n;
        sum1= sum1 + p*n;

    }
    if (sum == sum1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}