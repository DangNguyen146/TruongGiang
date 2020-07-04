#pragma once
#include"DoUong.h"
#include<iostream>
using namespace std;
class Ruoi:public DoUong
{
private:
	int NongDo;
	int Loai;
public:
	void Nhap();
	void Xuat();
};

