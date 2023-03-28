
#include <iostream>
using namespace std;

struct Ngay {
	int ngay;
	int thang;
	int nam;
};

struct HOPSUA {
	char nhanHieu[20];
	float trongLuong;
	Ngay hanSuDung;
};
void NhapHopsua(HOPSUA& hs) {
	cout << "Nhap nhan hieu: ";
	cin >> hs.nhanHieu;
	cout << "Nhap trong luong: ";
	cin >> hs.trongLuong;
	cout << "Nhap han su dung (ngay/thang/nam): ";
	cin >> hs.hanSuDung.ngay >> hs.hanSuDung.thang >> hs.hanSuDung.nam;
}
void XuatHopsua(HOPSUA hs) {
	cout << "Nhan hieu: " << hs.nhanHieu << endl;
	cout << "Trong luong: " << hs.trongLuong << endl;
	cout << "Han su dung: " << hs.hanSuDung.ngay << "/" << hs.hanSuDung.thang << "/" << hs.hanSuDung.nam << endl;
}
int main() {
	HOPSUA hs;
	NhapHopsua(hs);
	cout << "Thong tin cua hop sua:" << endl;
	XuatHopsua(hs);
	return 0;
}