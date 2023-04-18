#include <iostream>
using namespace std;

int sumEven(int arr[], int start, int end) {
   
    if (start == end) {
        if (arr[start] % 2 == 0) {
            return arr[start];
        }
        return 0;
    } 
    int mid = (start + end) / 2;
    int sumLeft = sumEven(arr, start, mid);
    int sumRight = sumEven(arr, mid + 1, end);

    return sumLeft + sumRight;
}
int main() {
    int arr[5];
    cout << "Nhap 5 so nguyen: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum = sumEven(arr, 0, 4);
    cout << "Tong cac so chan trong mang la: " << sum << endl;
    return 0;
}
