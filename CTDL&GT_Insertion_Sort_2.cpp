#include <iostream>
using namespace std;

void InsertionSort(int a[], int n) {
    int pos, x;
    for (int i = 1; i < n; i++) { 
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1]) {
            a[pos] = a[pos - 1];    
            pos--;
        }
        a[pos] = x;
    }
}

int main() {
    int a[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    InsertionSort(a, n);
    cout << "sau khi sap xep la ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
