#include "Keo.h"
void Keo::Nhap()
{
	cout << "Chon loai keo (1-Keo cung 2-Keo mem) :";
	cin >> this->LoaiKeo;
	ThucPham::Nhap();
	this->NoiCungCap = "Xuong RED";
	if (this->LoaiKeo == 1)
		this->GiaBan = this->GiaNhap * 1.3;
	if (this->LoaiKeo == 2)
		this->GiaBan = this->GiaNhap * 1.1;
}
void Keo::Xuat()
{
	if (this->LoaiKeo == 1)
		cout << this->MaTHucPham << " Keo Keo cung " << this->Ten << " " << this->NoiCungCap << " " << this->KhoiLuong << " " << this->GiaNhap << " " << this->GiaBan << endl;
	if (this->LoaiKeo == 2)
		this->GiaBan = this->GiaNhap * 1.1;
	cout << this->MaTHucPham << " Keo Keo mem " << this->Ten << " " << this->NoiCungCap << " " << this->KhoiLuong << " " << this->GiaNhap << " " << this->GiaBan << endl;
}