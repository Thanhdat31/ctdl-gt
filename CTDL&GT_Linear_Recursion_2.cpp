#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0) return 1; 
	return n * factorial(n - 1);
}
//hàm main
int main() {
	int n;
	cout << "nhap so : ";
	cin >> n;
	int kq = factorial(n);
	cout << "\nKết quả \n" << n << "! = " << kq;

}