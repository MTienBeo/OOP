#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

bool ktNhuan(NGAY);
NGAY HomQua(NGAY);

int main()
{
	NGAY A;
	cout << "\nNhap ngay: ";
	Nhap(A);

	cout << "\nNgay: ";
	Xuat(A);

	cout << "\nNgay hom qua: ";
	Xuat(HomQua(A));

	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap Nam:";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

bool ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

NGAY HomQua(NGAY x)
{
	int NgayThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x) == 1)
		NgayThang[1] = 29;
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	x.Ngay--;
	if (x.Ngay == 0)
	{
		x.Thang--;
		if (x.Thang == 0)
		{
			x.Nam--;
			x.Thang = 12;
		}
		x.Ngay = NgayThang[x.Thang - 1];
	}
	return x;
}