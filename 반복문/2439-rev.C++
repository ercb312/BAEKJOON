#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int n;
    string s = "*";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << right << setw(n) << s;
        s += "*";
        cout << endl;
    }
}
 /*
 * 
 * 
 */