#include "DoUong.h"
void DoUong::Nhap()
{
	cin.ignore();
	cout << "Ma Ruoi: ";
	getline(cin, this->MaRuoi);
	cout << "Nhap Ten: ";
	getline(cin, this->Ten);
	cout << "Nhap Dung tich: ";
	cin >> this->DungTich;
	cout << "Nhap Gia nhap: ";
	cin >> this->GiaNhap;
}