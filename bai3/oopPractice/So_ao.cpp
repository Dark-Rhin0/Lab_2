#include <iostream>
#include "So_ao.h"
using namespace std;




void SoAo::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    do {
        cout << "Nhap phan ao (khac 0): ";
        cin >> iAo;
    } while (iAo == 0);
}


void SoAo::Xuat() {
    cout << iThuc << " + " << iAo << "i";
}




SoAo SoAo::Tong(SoAo var) {
    SoAo kq;
    kq.iThuc = iThuc + var.iThuc;
    kq.iAo = iAo + var.iAo ;
    return kq;
}


SoAo SoAo::Hieu(SoAo var) {
    SoAo kq;
    kq.iThuc = iThuc - var.iThuc;
    kq.iAo = iAo - var.iAo;
    return kq;
}

// tích số ảo

SoAo SoAo::Tich(SoAo var) {
    SoAo kq;
    kq.iThuc = iThuc*var.iThuc - iAo*var.iAo;
    kq.iAo = iThuc*var.iAo + iAo*var.iThuc;
    return kq;
}

// thương số ảo

SoAo SoAo::Thuong(SoAo var) {
    SoAo kq;
    int mau = var.iThuc * var.iThuc + var.iAo * var.iAo;

    kq.iThuc = (iThuc * var.iThuc + iAo * var.iAo) / mau;
    kq.iAo = (iAo * var.iThuc - iThuc * var.iAo) / mau;

    return kq;
}

