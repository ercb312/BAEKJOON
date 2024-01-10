#include <iostream>
using namespace std;

int main() {
    int h, m, t, h1, m1, h2;
    cin >> h >> m;
    cin >> t;

    h1 = t/60;
    m1 = t%60; 

    if (m + m1 >= 60) {
        m = (m + m1) - 60;
        h = h + h1 + 1;
        if (h>=24) {
            h = h%24;
        }
    }
    else if (m + m1 < 60) {
        m = (m + m1);
        h = h + h1;
        if (h>=24) {
            h = h%24;
        }
    }

    cout << h << " " << m;
}