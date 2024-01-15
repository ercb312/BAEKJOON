#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i<n; i++) { 
        cin >> a[i];
    }
    int v, sum = 0;
    cin >> v;
    for (int j = 0; j<=n; j++) {
        if (v == a[j]) {
            sum += 1;
        }
    }
    cout << sum;
}