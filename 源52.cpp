#include<iostream>
using namespace std;

int main ()
{
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	int A = 100;
	int B = 20;
	int& C = B;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C << endl;
	system("pause");
	return 0;
}



