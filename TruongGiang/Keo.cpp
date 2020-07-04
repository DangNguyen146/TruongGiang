#include "Keo.h"
void Keo::Nhap()
{
	cout << "Chon loai keo 1-Keo cung 2-Keo mem";
	cin >> this->LoaiKeo;
	ThucPham::Nhap();
	this->NoiCungCap = "Xuong RED";
	if (this->LoaiKeo == 1)
		this->GiaBan = this->GiaNhap * 1.3;
	if (this->LoaiKeo == 2)
		this->GiaBan = this->GiaNhap * 1.1;
}