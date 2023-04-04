#include <iostream>
using namespace std;

int search(int a[], int n, int x) {
    int k = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            k = i;
        }
    }
    return k;
}

int main() {
    int a[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    int x = 9;
    int k = search(a, n, x);
    if (k == -1) {
        cout << x << "khong tim thay " << endl;
    }
    else {
        cout << x << " tim thay o vi tri " << k << " trong mang " << endl;
    }
    return 0;
}