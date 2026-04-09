#include <iostream>
#include "So_ao.h"
using namespace std;


int main() {
    SoAo a, b;


    cout << "Nhap so Ao a:\n";
    a.Nhap();


    cout << "Nhap so Ao b:\n";
    b.Nhap();


    cout << "\nSo Ao a: ";
    a.Xuat();


    cout << "\nSo Ao b: ";
    b.Xuat();


    // Tính toán
    SoAo tong = a.Tong(b);
    SoAo hieu = a.Hieu(b);
    SoAo tich = a.Tich(b);
    SoAo thuong = a.Thuong(b);


    cout << "\n\nTong: ";
    tong.Xuat();


    cout << "\nHieu: ";
    hieu.Xuat();


    cout << "\nTich: ";
    tich.Xuat();


    cout << "\nThuong: ";
    thuong.Xuat();




    return 0;
}
