#include "GoiSanPham.h"
#include"Banh.h"
#include"Keo.h"
#include"NuocNgot.h"
#include"Ruoi.h"
#include<string.h>
void GoiSanPham::Nhap()
{

	cin.ignore();
	cout << "Nhap Ma goi: ";
	getline(cin, this->MaGoi);
	cout << "Chon laoi SP (1-goi chuan 2-Goi Dac biet): ";
	cin >> this->LoaiSP;
	cout << "So luong thuc pham trong goi: ";
	cin >> this->SLThucPham;
	for (int i = 0; i < SLThucPham; i++)
	{
		cout << "Nhap thong tin don vi thu " << i+1 << ":" << endl;
		cout << "Loai thuc pham (1-banh 2- Keo): ";
		int se;
		cin >> se;
		switch (se)
		{
		case 1:
			tp[i] = new Banh;
			break;
		case 2:
			tp[i] = new Keo;
		}
		tp[i]->Nhap();
	}
	cout << endl;
	cout << "So luong nuoc trong goi: ";
	cin >> this->SLDoUuong;
	for (int i = 0; i < SLDoUuong; i++)
	{
		cout << "Nhap thong tin don vi thu " << i+1 << ":" << endl;
		cout << "Loai do uong (1-ruoi 2- nuoc giai khat): ";
		int se;
		cin >> se;
		switch (se)
		{
		case 1:
			du[i] = new Ruoi;
			break;
		case 2:
			du[i] = new NuocNgot;
		}
		du[i]->Nhap();
	}


	this->GiaTien = 0;
	for (int i = 0; i < SLThucPham; i++)
	{
		this->GiaTien += tp[i]->GetGiaBan();
	}
	for (int i = 0; i < SLDoUuong; i++)
	{
		this->GiaTien += du[i]->GetGiaBan();
	}
	if (this->LoaiSP == 2)
		this->GiaTien = this->GiaTien * 1.3;
}

ostream& operator<<(ostream& output, const GoiSanPham& a)
{
	cout << "Goi san pham: " <<  a.MaGoi << " Loai " << a.LoaiSP << " " << a.GiaTien << " " << a.SLThucPham << " " << a.SLDoUuong << endl;
	for (int i = 0; i < a.SLThucPham; i++)
	{
		a.tp[i]->Xuat();
	}
	for (int i = 0; i < a.SLDoUuong; i++)
	{
		a.du[i]->Xuat();
	}
	return output;
}