#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date d1, d2; // khai báo biến để lưu ngày

	cout << "Nhap ngay thang nam:\n" << endl;
	d1.Nhap();

	cout << "Ngay thang nam vua nhap la: ";
	d1.Xuat();

	d2 = d1.NgayThangNamTiepTheo();

	cout << "\nNgay thang nam tiep theo la: ";
	d2.Xuat();

	return 0;
}