#include <iostream>
using namespace std;

void bubble_sort() {
    int temp, n;
    cin >> n;
    int *p = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = n - 1;  i>0; i--) {
        for (int j = 0; j < i; j++) {
            if (p[j] < p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    cout << p[0] << " " << p[n-1];
}


int main() {
    bubble_sort();
}
/*
Bubble Sort
*/