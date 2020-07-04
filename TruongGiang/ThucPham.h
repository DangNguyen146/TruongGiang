#pragma once
#include<iostream>
using namespace std;
class ThucPham
{
protected:
	string MaTHucPham;
	string Ten;
	int GiaNhap;
	string NoiCungCap;
	int KhoiLuong;
	float GiaBan;
public:
	virtual void Nhap();
	virtual void Xuat() = 0;
	float GetGiaBan() { return this->GiaBan; }
};

