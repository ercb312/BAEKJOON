#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;

    if (m>=45) {
        m = m - 45;
    }
    else if (m<45) {
        if (h==0) {
            h = 23;
        }
        else {
            h = h - 1;
        }
        m = 60 - (45 - m);
    }
    
    cout << h << " " << m;
}