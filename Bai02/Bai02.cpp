#include <iostream>
#include <cmath>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A, B;
	cout << "Nhap toa do diem A: " << endl;
	Nhap(A);
	cout << "Nhap toa do diem B: " << endl;
	Nhap(B);
	float kq = KhoangCach(A, B);
	cout << "\nToa do A: " << endl;
	Xuat(A);
	cout << "Toa do B: " << endl;
	Xuat(B);
	cout << "\nKet qua: " << kq;
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}
void Xuat(DIEMKHONGGIAN P)
{
	cout << "x = " << P.x << endl;
	cout << "y = " << P.y << endl;
	cout << "z = " << P.z << endl;
}
float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x)
			  + (Q.y - P.y) * (Q.y - P.y)
			  + (Q.z - P.z) * (Q.z - P.z));
}