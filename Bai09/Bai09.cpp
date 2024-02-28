#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);

int main()
{
	DUONGTRON c;
	Nhap(c);
	Xuat(c);

	cout << "\n\nChu vi la: " << ChuVi(c);
	cout << "\nDien tich la: " << DienTich(c);

	return 0;
}

void Nhap(DIEM& I)
{
	cout << "Nhap x: ";
	cin >> I.x;
	cout << "Nhap y: ";
	cin >> I.y;
}
void Xuat(DIEM I)
{
	cout << "Duong tron co tam la: ";
	cout << "\nx = " << I.x << endl;
	cout << "y = " << I.y << endl;
}
void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam: \n";
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	Xuat(c.I);
	cout << "Ban kinh: " << c.R;
}

float ChuVi(DUONGTRON c)
{
	return (3.14 * 2 * c.R);
}

float DienTich(DUONGTRON c)
{
	return (3.14 * c.R * c.R);
}