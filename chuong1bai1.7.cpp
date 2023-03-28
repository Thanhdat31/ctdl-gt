#include<iostream>
using namespace std;
struct Ngay {
	int ngay;
	int thang;
	int nam;
};
void NhapNgay(Ngay& ngay) {
	cout << "Nhap ngay: ";
	cin >> ngay.ngay;
	cout << "Nhap thang: ";
	cin >> ngay.thang;
	cout << "Nhap nam: ";
	cin >> ngay.nam;
}
void XuatNgay(Ngay ngay) {
	cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}
int main() {
	Ngay ngay_sinh;
	NhapNgay(ngay_sinh);
	cout << "Ngay sinh cua ban la: ";
	XuatNgay(ngay_sinh);
	return 0;
}
