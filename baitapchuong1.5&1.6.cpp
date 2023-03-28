// Đơn thức
//#include<iostream>
//using namespace std;
//struct donthuc {
//	double a;
//	int n;
//};
//void nhapso(donthuc& dt)
//{
//	cout << "nhap he so a:";
//	cin >> dt.a;
//	cout << "nhap bac n:";
//	cin >> dt.n;
//}
//void xuatdonthuc(donthuc& dt)
//{
//	cout<< dt.a<<"X^"<<dt.n<<endl;
//}
//int main() {
//	donthuc dt;
//	nhapso(dt);
//	xuatdonthuc(dt);
//	return 0;
//}

// Đa thức
#include <iostream>
using namespace std;

const int MAX_DEGREE = 100; 

struct DaThuc {
    int bac; 
    float heSo[MAX_DEGREE + 1];
};

void nhapDaThuc(DaThuc& p) {
    cout << "Nhap bac cua da thuc: ";
    cin >> p.bac;
    cout << "Nhap cac he so cua da thuc: ";
    for (int i = p.bac; i >= 0; i--) {
        cout << "a" << i << " = ";
        cin >> p.heSo[i];
    }
}


void xuatDaThuc(DaThuc p) {
    for (int i = p.bac; i >= 0; i--) {
        cout << p.heSo[i] << "x^" << i;
        if (i > 0) {
            cout << " + ";
        }
    }
    cout << endl;
}

int main() {
    DaThuc p;
    nhapDaThuc(p);
    xuatDaThuc(p);
    return 0;
}


