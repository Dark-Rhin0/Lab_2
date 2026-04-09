#include <iostream>
#include "Date.h"
using namespace std;

bool LaNamNhuan(int nam);
int SoNgayCuaThang(int thang, int nam);
// Hàm nhập ngày tháng năm
void Date::Nhap() {
    while (true) {
        cout << "Nhap ngay: ";
        cin >> iNgay;

        cout << "Nhap thang: ";
        cin >> iThang;

        cout << "Nhap nam: ";
        cin >> iNam;

        // kiểm tra nhập sai kiểu
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Nhap sai dinh dang! Nhap lai.\n";
            continue;
        }

        // kiểm tra tháng
        if (iThang < 1 || iThang > 12) {
            cout << "Thang khong hop le! Nhap lai.\n";
            continue;
        }

        // kiểm tra ngày
        int maxDay = SoNgayCuaThang(iThang, iNam);
        if (iNgay < 1 || iNgay > maxDay) {
            cout << "Ngay khong hop le! Nhap lai.\n";
            continue;
        }

        // hợp lệ thì thoát
        break;
    }
}

// Hàm xuất ngày tháng năm
void Date::Xuat() {
	cout << iNgay << "/" << iThang << "/" << iNam;
}

// Hàm kiểm tra năm nhuận
bool LaNamNhuan(int nam) {
	return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Hàm tìm số ngày của tháng đó

int SoNgayCuaThang(int thang, int nam) {
	switch (thang) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: // các thang có 31 ngày
		return 31;
	case 4: case 6: case 9: case 11: // các tháng có 30 ngày
		return 30;
	case 2:
		return LaNamNhuan(nam) ? 29 : 28; // năm nhuận thì tháng 2 có 28+1 ngày
	default: return 0;
	}
}

Date Date::NgayThangNamTiepTheo() {
	Date kq;
	kq = *this; // Sao chép ngày hiện tại vào kq

	kq.iNgay++; // Tăng ngày lên 1

	if (kq.iNgay > SoNgayCuaThang(kq.iThang, kq.iNam)) {
		kq.iNgay = 1; // Reset ngày về 1
		kq.iThang++; // Tăng tháng lên 1
		if (kq.iThang > 12) {
			kq.iThang = 1; // Reset tháng về 1
			kq.iNam++; // Tăng năm lên 1
		}
	}
	return kq;
}