#include "ThucPham.h"
#include<string>
void ThucPham::Nhap()
{
	cin.ignore();
	cout << "Ma Thuc Pham: ";
	getline(cin, this->MaTHucPham);
	cout << "Nhap Ten: ";
	getline(cin, this->Ten);
	cout << "Nhap Khoi luong: ";
	cin >> this->KhoiLuong;
	cout << "Nhap Gia nhap: ";
	cin >> this->GiaNhap;
}
