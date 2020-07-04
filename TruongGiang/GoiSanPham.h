#pragma once
#include"ThucPham.h"
#include"DoUong.h"

#include<iostream>
using namespace std;
class GoiSanPham
{
private:
	string MaGoi;
	int LoaiSP;
	int SLThucPham;
	int SLDoUuong;
	ThucPham* tp[100];
	DoUong* du[100];
	float GiaTien;
public:
	void Nhap();
	friend ostream& operator<<(ostream& output, const GoiSanPham& a);
};

