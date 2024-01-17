#include <iostream>
using namespace std;
#include <climits>

int main() {
    int a[9];
    int min = INT_MAX;
    int max = INT_MIN;
    int index;

    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    for (int i : a)
    {
        if (i < min) {
            min = i;
        }

        if (i > max) {
            max = i;
        }
    }

    for (int i = 0; i < 9; i++) {
        if (a[i] == max) {
            index = i;
        }
    }

    cout << max << endl << index+1;

}
