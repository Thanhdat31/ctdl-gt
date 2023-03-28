#include <iostream>
using namespace std;

struct NGAY {
    int ngay, thang, nam;
};

struct SOTIETKIEM {
    char maso[6], loaiTietKiem[11], hoTen[31];
    int cmnd;
    NGAY ngayMoSo;
    double soTienGui;
};

void nhapSOTIETKIEM(SOTIETKIEM& stk) {
    cout << "Nhap ma so: ";
    cin.getline(stk.maso, 6);
    cout << "Nhap loai tiet kiem: ";
    cin.getline(stk.loaiTietKiem, 11);
    cout << "Nhap ho ten khach hang: ";
    cin.getline(stk.hoTen, 31);
    cout << "Nhap CMND: ";
    cin >> stk.cmnd;
    cout << "Nhap ngay mo so: " << endl;
    cout << "Ngay: ";
    cin >> stk.ngayMoSo.ngay;
    cout << "Thang: ";
    cin >> stk.ngayMoSo.thang;
    cout << "Nam: ";
    cin >> stk.ngayMoSo.nam;
    cout << "Nhap so tien gui: ";
    cin >> stk.soTienGui;
}

void xuatSOTIETKIEM(SOTIETKIEM stk) {
    cout << "Ma so: " << stk.maso << endl;
    cout << "Loai tiet kiem: " << stk.loaiTietKiem << endl;
    cout << "Ho ten khach hang: " << stk.hoTen << endl;
    cout << "CMND: " << stk.cmnd << endl;
    cout << "Ngay mo so: " << stk.ngayMoSo.ngay << "/" << stk.ngayMoSo.thang << "/" << stk.ngayMoSo.nam << endl;
    cout << "So tien gui: " << stk.soTienGui << endl;
}

int main() {
    SOTIETKIEM stk;
    cout << "Nhap thong tin sotietkiem: " << endl;
    nhapSOTIETKIEM(stk);
    cout << endl << "Thong tin sotietkiem vua nhap: " << endl;
    xuatSOTIETKIEM(stk);
    return 0;
}
