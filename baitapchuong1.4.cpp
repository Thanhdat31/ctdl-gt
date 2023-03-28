#include<iostream>
using namespace std;
struct diem
{
	double x, y, z;

};
void nhapdiemtoado(diem& d)
{
	cout << "nhap x:";
	cin >> d.x;
	cout << "nhap y:";
	cin >> d.y;
	cout << "nhap z:";
	cin >> d.z;
}
void xuatdiemtaodo(diem& d)
{
	cout << "diem toa do O: (" << d.x << "," << d.y <<","<<d.z<< ")" << endl;
}
int main() {
	diem d;
	nhapdiemtoado(d);
	xuatdiemtaodo(d);
	return 0;
}