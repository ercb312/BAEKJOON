#include <iostream>
using namespace std;

int main() {
    int n, s1, s2;
    cin >> n;
    
    for (int i = 1; i<=n; i++) {
        cin >> s1 >> s2;
        cout << "Case #" << i << ": " << s1+s2 << endl;
    }
}