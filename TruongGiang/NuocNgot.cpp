#include "NuocNgot.h"
void NuocNgot::Nhap()
{
	cout << "Nhap Nuoc (1-Co Gas 2-Khong co): ";
	cin >> this->CoGas;
	DoUong::Nhap();
	this->NoiCungCap = "Cong ty Green";
	if (this->CoGas == 1)
		this->GiaBan = GiaNhap * 1.2;
	else
		this->GiaBan = this->GiaNhap * 1.1;
}
void NuocNgot::Xuat()
{
	if(this->CoGas==1)
		cout << this->MaRuoi << " Co Gas " << " " << this->Ten << " " << this->NoiCungCap << " " << this->DungTich << " " << this->GiaNhap << " " << this->GiaBan << endl;
	else
		cout << this->MaRuoi << " Khong Gas " << " " << this->Ten << " " << this->NoiCungCap << " " << this->DungTich << " " << this->GiaNhap << " " << this->GiaBan << endl;
}