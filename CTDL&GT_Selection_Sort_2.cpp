#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void SelectionSort(int a[], int n)
{
    int min; 
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j; 
        if (min != i)
            Swap(a[min], a[i]);
    }
}

int main() {
    int a[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
    int n = sizeof(a) / sizeof(a[0]);
    SelectionSort(a, n);
    cout << "sau khi sap xep la ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
