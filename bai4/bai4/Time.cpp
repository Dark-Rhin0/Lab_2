#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;


void Time::Nhap() {
    while (true) {
        cout << "Nhap gio: ";
        cin >> iGio;

        cout << "Nhap phut: ";
        cin >> iPhut;

        cout << "Nhap giay: ";
        cin >> iGiay;

        // kiểm tra nhập sai kiểu
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Nhap sai dinh dang! Nhap lai.\n";
            continue;
        }

        // kiểm tra hợp lệ
        if (iGio < 0 || iGio > 23) {
            cout << "Gio khong hop le! (0-23)\n";
            continue;
        }

        if (iPhut < 0 || iPhut > 59) {
            cout << "Phut khong hop le! (0-59)\n";
            continue;
        }

        if (iGiay < 0 || iGiay > 59) {
            cout << "Giay khong hop le! (0-59)\n";
            continue;
        }

        // hợp lệ thì thoát
        break;
    }
}

//xuất thời gian theo định dạng HH:MM:SS
void Time::Xuat() {
	cout << setw(2) << setfill('0') << iGio << ":" // setw(2) để đảm bảo luôn có 2 chữ số, setfill('0') để điền số 0 nếu thiếu
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
