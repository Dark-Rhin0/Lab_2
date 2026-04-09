#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t1, t2;

	cout << "nhap gio phut giay:\n" << endl;
	t1.Nhap();
	cout << "Gio phut giay vua nhap la: ";
	t1.Xuat();

	t2 = t1.TinhCongThemMotGiay();
	cout << "Gio phut giay tiep theo la: ";
	t2.Xuat();

	return 0;
}
