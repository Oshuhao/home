#include <iostream>
using namespace std;

int main() 
{ 
	
	
	int skt[2][3] =
	{
		{1,2,3},
		{4,5,6}

	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(skt);
	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(skt[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ" << sizeof(skt[0][0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(skt) / sizeof(skt[0]) << endl;
	cout << "��ά��������Ϊ��" << sizeof(skt[0]) / sizeof(skt[0][0]) << endl;
	cout << "��ά�����׵�ַΪ��" << (int)skt << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)skt[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)skt[2] << endl;
	cout << "��ά���������Ԫ���׵�ַ��" << (int)&skt[0][2] << endl;
	cout << "��ά���������Ԫ���׵�ַ��" << (int)&skt[1][2] << endl;



	
	system ("pause");
	return 0;
}