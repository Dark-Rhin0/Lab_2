#include <iostream>
#include "So_ao.h"
using namespace std;


int main() {
    SoAo a, b;


    cout << "Nhap so Thuc a:\n";
    a.Nhap();


    cout << "Nhap so Thuc b:\n";
    b.Nhap();


    cout << "\nSo thuc a: ";
    a.Xuat();


    cout << "\nSo thuc b: ";
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
