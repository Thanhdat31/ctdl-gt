#include <iostream>
using namespace std;

struct Ngay {
	int ngay;
	int thang;
	int nam;
};

struct ThoiGian {
	int gio;
	int phut;
};

struct VE {
	char tenPhim[20];
	int giaTien;
	ThoiGian xuatChieu;
	Ngay ngayXem;
};
void NhapVe(VE& v) {
	cout << "Nhap ten phim: ";
	cin >> v.tenPhim;
	cout << "Nhap gia tien: ";
	cin >> v.giaTien;
	cout << "Nhap thoi gian xuat chieu (gio:phut): ";
	cin >> v.xuatChieu.gio >> v.xuatChieu.phut;
	cout << "Nhap ngay xem (ngay/thang/nam): ";
	cin >> v.ngayXem.ngay >> v.ngayXem.thang >> v.ngayXem.nam;
}
void XuatVe(VE v) {
	cout << "Ten phim: " << v.tenPhim << endl;
	cout << "Gia tien: " << v.giaTien << endl;
	cout << "Thoi gian xuat chieu: " << v.xuatChieu.gio << "G" << v.xuatChieu.phut << "P" << endl;
	cout << "Ngay xem: " << v.ngayXem.ngay << "/" << v.ngayXem.thang << "/" << v.ngayXem.nam << endl;
}
int main() {
	VE v;
	NhapVe(v);
	cout << "Thong tin cua ve xem phim:" << endl;
	XuatVe(v);
	return 0;
}
