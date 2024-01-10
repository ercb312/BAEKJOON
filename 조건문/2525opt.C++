#include <iostream>
using namespace std;
int main() {
    int h, m, t, h1, m1;
    cin >> h >> m;
    cin >> t;
    h1 = t/60;
    m1 = t%60; 
    if (m + m1 >= 60) {
        h1 += 1;
        m = m + m1 - 60;
    }
    else {
        m = m + m1;
    }
    h = (h + h1)%24;
    cout << h << " " << m;
} 