#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main()
{
	SOPHUC a, b, kq;
	cout << "Nhap so phuc thu nhat: " << endl;
	Nhap(a);
	cout << "Nhap so phuc thu hai: " << endl;
	Nhap(b);

	kq = Tong(a, b);
	cout << "\nTong cua hai so phuc la: " << endl;
	Xuat(kq);

	kq = Hieu(a, b);
	cout << "\nHieu cua hai so phuc la: " << endl;
	Xuat(kq);

	kq = Tich(a, b);
	cout << "\nTich cua hai so phuc la: " << endl;
	Xuat(kq);

}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "Phan thuc: " << x.Thuc << endl;
	cout << "Phan ao: " << x.Ao << endl;
}

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}