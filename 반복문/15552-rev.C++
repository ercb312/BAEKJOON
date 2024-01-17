#include <iostream>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int s1, s2;
    for (int i = 0; i<n; i++) {
        cin >> s1 >> s2;
        cout << s1+s2 << "\n";
    }
}