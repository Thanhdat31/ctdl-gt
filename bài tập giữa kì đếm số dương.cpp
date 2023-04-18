#include <iostream>
using namespace std;

int countPositive(float arr[], int n) {
    if (n == 0) {
        return 0;
    }
    else {
        int count = countPositive(arr, n - 1);
        if (arr[n - 1] > 0) {
            count++;
        }
        return count;
    }
}

int main() {
    const int n = 6;
    float arr[n];
    cout << "Nhap so thuc: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = countPositive(arr, n);
    cout << "So luong gia tri duong trong mang la: " << count << endl;

    return 0;
}
