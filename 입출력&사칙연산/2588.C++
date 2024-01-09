#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B, a, b, c;
    cin >> A >> B;
    a = B.substr(2, 1);
    b = B.substr(1, 1);
    c = B.substr(0, 1);
    
    cout << stoi(A)*stoi(a) << endl;
    cout << stoi(A)*stoi(b) << endl;
    cout << stoi(A)*stoi(c) << endl;
    cout << stoi(A)*stoi(B) << endl;
}
