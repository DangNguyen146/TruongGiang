#include "Banh.h"
void Banh::Nhap()
{
	ThucPham::Nhap();
	cout << "Chon nhoi cung cap(1-Red 2-BLUE): " << endl;
	int se;
	cin >> se;
	if (se == 1)
		this->NoiCungCap = "Xuong RED";
	else
		this->NoiCungCap = "Xuong BLUE";
	this->GiaBan = this->GiaNhap * 1.2;
}
void Banh::Xuat()
{
	cout << this->MaTHucPham << " Banh " << this->Ten << " " << this->NoiCungCap << " " << this->KhoiLuong << " " << this->GiaNhap << " " << this->GiaBan << endl;
}