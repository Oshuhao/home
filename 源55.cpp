#include<iostream>
using namespace std;

void func( )
{
	cout << " func �ĵ���" << endl;

}
void func(int a)
{
	cout << " func (int a)�ĵ���" << endl;

}
void func(double a)
{
	cout << " func (double a)�ĵ���" << endl;

}
void func(int a, double b)
{
	cout << "func(int a,double b)" << endl;
}
void func(double b,int a)
{
	cout << "func(double b ,int a)" << endl;
}
int main ()
{
	func();
	
	
	system("pause");
	return 0;
}



