#include <iostream>
using namespace std;
#include <string>

int main() {
    char s1, s2;

    while (1) {
        s1 = cin.get();
        s2 = cin.get();
        int n1 = s1 - '0';
        int n11 = n1 + 1;
        int n2 = s2 - '0';
        int n22 = n2 + 1;
        cout << n11 + n22 << endl;
        
        if (s1 == '\n') {
            return 0;
        }
    }
}