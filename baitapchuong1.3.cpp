#include<iostream>
using namespace std;
struct diem
{
	double x,y;
	
};
void nhapdiemtoado(diem &d)
{
	cout << "nhap x:";
	cin >> d.x;
	cout << "nhap y";
	cin >> d.y;
}
void xuatdiemtaodo(diem &d)
{
	cout << "diem toa do O: (" << d.x << "," << d.y << ")" << endl;
}
int main() {
	diem d;
	nhapdiemtoado(d);
	xuatdiemtaodo(d);
	return 0;
}

