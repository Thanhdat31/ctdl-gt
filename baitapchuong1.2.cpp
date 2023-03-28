#include<iostream>
using namespace std;
struct honso {
	int tuso, mauso, songuyen;
};
void nhaphonso(honso& hs)
{
	cout << "nhap mau so:";
	cin >> hs.mauso;
	cout << "nhap tu so:";
	cin >> hs.tuso;
	cout << "nhap so nguyen:";
	cin >> hs.songuyen;
}
void xuathonso(honso& hs)
{
	cout << hs.songuyen<< "("<< hs.tuso << "/" << hs.mauso <<") "\n";
}
int main()
{
	honso hs;
	nhaphonso(hs);
	xuathonso(hs);
	return 0;


}

