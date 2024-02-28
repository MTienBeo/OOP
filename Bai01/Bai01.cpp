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
int XetDau(PHANSO);

int main()
{
    PHANSO ps;
    cout << "Nhap phan so: ";
    Nhap(ps);

    cout << "\nPhan so: ";
    Xuat(ps);

    int kq = XetDau(ps);
    switch (kq)
    {
        case 1:
            cout << "\nPhan so > 0";
            break;
        case -1:
            cout << "\nPhan so < 0";
            break;
        case 0:
            cout << "\nPhan so = 0";
            break;
    }
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

int XetDau(PHANSO x)
{
    if (x.Tu * x.Mau > 0)
        return 1;
    if (x.Tu * x.Mau < 0)
        return -1;
    return 0;
}