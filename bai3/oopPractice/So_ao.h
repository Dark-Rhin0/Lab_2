#ifndef SOAO_H
#define SOAO_H


class SoAo {
private:
    float iThuc;
    float iAo;


public:
    void Nhap();
    void Xuat();


    SoAo Tong(SoAo ps);
    SoAo Hieu(SoAo ps);
    SoAo Tich(SoAo ps);
    SoAo Thuong(SoAo ps);


};
#endif