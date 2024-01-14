#include <iostream>
using namespace std;

int main() {
    int n, l;
    cin >> n;

    l = n/4;
    for (int i = 1; i <= l; i++) {
        cout << "long ";
    }
    cout << "int";
}