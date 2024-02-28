#include <iostream>
using namespace std;

struct PhanSo
{
    int Tu;
    int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
    PHANSO A, B, kq;
    cout << "Nhap phan so thu 1: ";
    Nhap(A);
    cout << "Nhap phan so thu 2: ";
    Nhap(B);
    
    kq = Tong(A, B);
    cout << "\nTong hai phan so: ";
    Xuat(kq);

    kq = Hieu(A, B);
    cout << "\nHieu hai phan so: ";
    Xuat(kq);

    kq = Tich(A, B);
    cout << "\nTich hai phan so: ";
    Xuat(kq);

    kq = Thuong(A, B);
    cout << "\nThuong hai phan so: ";
    Xuat(kq);

    return 0;
}

void Nhap(PHANSO& x)
{
    cout << "\nNhap tu: ";
    cin >> x.Tu;
    cout << "Nhap mau: ";
    cin >> x.Mau;
}

void Xuat(PHANSO x)
{
    cout << "\nTu: " << x.Tu;
    cout << "\nMau: " << x.Mau;
}

PHANSO Tong(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
    temp.Mau = x.Mau * y.Mau;
    return temp;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
    temp.Mau = x.Mau * y.Mau;
    return temp;
}

PHANSO Tich(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.Tu = x.Tu * y.Tu;
    temp.Mau = x.Mau * y.Mau;
    return temp;
}

PHANSO Thuong(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.Tu = x.Tu * y.Mau;
    temp.Mau = x.Mau * y.Tu;
    return temp;
}