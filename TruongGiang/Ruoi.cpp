#include "Ruoi.h"
void Ruoi::Nhap()
{
	cout << "Chon loai ruoi(1-Loai 1  2-Loai 2): ";
	cin >> this->Loai;
	DoUong::Nhap();
	cout << "Nhap nong do: ";
	cin >> this->NongDo;
	this->NoiCungCap = "Cong ty Black";
	if (this->Loai == 1)
		this->GiaBan = GiaNhap * 2;
	else
		this->GiaBan = this->GiaNhap * 1.5;
}
void Ruoi::Xuat()
{
	cout << this->MaRuoi << " Loai " << this->Loai << " " << this->Ten << " " << this->NoiCungCap << " " << this->DungTich << " " << this->NongDo << " " << this->GiaNhap << " " << this->GiaBan << endl;
}