#include "Banh.h"
void Banh::Nhap()
{
	ThucPham::Nhap();
	this->NoiCungCap = "Xuong BLUE";
	this->GiaBan = this->GiaNhap * 1.2;
}
void ThucPham::Xuat()
{
	cout << this->MaTHucPham << " Banh " << this->Ten << " " << this->NoiCungCap << " " << this->KhoiLuong << " " << this->GiaNhap << " " << this->GiaBan << endl;
}