#include <iostream>
using namespace std;

int main() 
{ 
	
	
	int skt[2][3] =
	{
		{1,2,3},
		{4,5,6}

	};
	cout << "二维数组占用内存空间为；" << sizeof(skt);
	cout << "二维数组第一行占用内存为：" << sizeof(skt[0]) << endl;
	cout << "二维数组第一个元素占用内存为" << sizeof(skt[0][0]) << endl;
	cout << "二维数组行数为：" << sizeof(skt) / sizeof(skt[0]) << endl;
	cout << "二维数组列数为：" << sizeof(skt[0]) / sizeof(skt[0][0]) << endl;
	cout << "二维数组首地址为：" << (int)skt << endl;
	cout << "二维数组第一行首地址为：" << (int)skt[0] << endl;
	cout << "二维数组第二行首地址为：" << (int)skt[2] << endl;
	cout << "二维数组第三个元素首地址：" << (int)&skt[0][2] << endl;
	cout << "二维数组第六个元素首地址：" << (int)&skt[1][2] << endl;



	
	system ("pause");
	return 0;
}