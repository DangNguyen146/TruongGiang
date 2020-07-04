#pragma once
#include"ThucPham.h"
#include<iostream>
using namespace std;
class Keo :public ThucPham
{
private:
	int LoaiKeo;
public:
	void Nhap();
	void Xuat();
};

