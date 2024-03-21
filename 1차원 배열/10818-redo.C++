#include <iostream>
using namespace std;
#include <climits>

int main() {
    int n;
    cin >> n;
    int *p = new int[n];

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 9; i++) {
        cin >> p[i];
    }

    for (int i : p)
    {
        if (i < min) {
            min = i;
        }

        if (i > max) {
            max = i;
        }
    }

    cout << min << endl << max;

}
