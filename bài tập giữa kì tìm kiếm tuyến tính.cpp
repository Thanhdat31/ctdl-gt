#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = linearSearch(arr, n, x);
    if (result == -1) cout << "Khong tim thay gia tri " << x << " trong mang";
    else cout << "Tim thay gia tri " << x << " tai vi tri " << result;
    return 0;
}
