#include<iostream>
#include <fstream>
#include"GoiSanPham.h"
using namespace std;

void writeDataToFile(string file, GoiSanPham a[], int n)
{
	std::ofstream fileOutput(file);

	if (fileOutput.fail())
	{
		std::cout << "Cannot open file at " << file << std::endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		fileOutput << a[i];
		fileOutput << endl;
	}
	cout << "Hoan thanh";
}


int main()
{
	//Câu a
	GoiSanPham a[100];
	int n;
	cout << "Nhap vao so luong goi san pham: ";
	cin >> n;
	cout << "_____________________________________________" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin goi thu " << i+1 << endl;
		a[i].Nhap();
	}

	//Câu b
	for (int i = 0; i < n; i++)
		cout << a[i];

	//Câu c
	string filePath = "danh_sach_goi_san_pham.txt";
	writeDataToFile(filePath, a, n);

	system("pause");
	return 0;
}