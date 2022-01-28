#include<iostream>
using namespace std;

void swap01(int a, int b,int c)
{
	int temp = a;
	a = b;
	b = c;
	c = temp;


}



int main(){
	int a = 10;
	int b = 20;
	int c = 30;
	swap01(a, b, c);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	
	
	
	system("pause");
	return 0;
}