#pragma once
#include<iostream>
#include<string>
using namespace std;
class DoUong
{
protected:
	string MaRuoi;
	string Ten;
	int GiaNhap;
	string NoiCungCap;
	float DungTich;
	float GiaBan;
public:
	virtual void Nhap();
	virtual void Xuat() = 0;
};

