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
int SoSanh(PHANSO, PHANSO);

int main()
{
    PHANSO A,B;
    cout << "Nhap phan so thu 1: ";
    Nhap(A);
    cout << "Nhap phan so thu 2: ";
    Nhap(B);

    int kq = SoSanh(A, B);
    cout << "\nPhan so lon nhat la: ";
    if (kq >= 0)
        Xuat(A);
    else
        Xuat(B);
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

int SoSanh(PHANSO x, PHANSO y)
{
    float a = (float)x.Tu / x.Mau;
    float b = (float)y.Tu / y.Mau;
    if (a > b)
        return 1;
    if (a < b)
        return -1;
    return 0;
}
