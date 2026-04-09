#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;


void Time::Nhap() {
	cout << "Nhap gio: ";
	cin >> iGio;

	cout << "Nhap phut: ";
	cin >> iPhut;

	cout << "Nhap giay: ";
	cin >> iGiay;
}

void Time::Xuat() {
	cout << setw(2) << setfill('0') << iGio << ":"
		 << setw(2) << setfill('0') << iPhut << ":"
		 << setw(2) << setfill('0') << iGiay << endl;

}


Time Time::TinhCongThemMotGiay() {
	Time kq;
	kq = *this; // Sao chép thời gian hiện tại vào kq

	kq.iGiay++; // Tăng giây lên 1
	if (kq.iGiay >= 60) {
		kq.iGiay = 0; // Reset giây về 0
		kq.iPhut++; // Tăng phút lên 1
		if (kq.iPhut >= 60) {
			kq.iPhut = 0; // Reset phút về 0
			kq.iGio++; // Tăng giờ lên 1
			if (kq.iGio >= 24) {
				kq.iGio = 0; // Reset giờ về 0
			}
		}
	}
	return kq;
}
