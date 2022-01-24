#include <iostream>
using namespace std;

int main() 
{ 
	
	int skr[6] = { 2,4,6,8,10,1};
	for (int i = 0; i < 6; i++)
	{
		cout << skr[i] << endl;
	}
	int start = 0;
	int end = sizeof(skr) / sizeof(skr[0]) - 1;
    while (start<end)
	{
	int temp = skr[start];
	skr[start] = skr[end];
	skr[end] = temp;
	start++;
	end--;
	}
	
	cout << "数组元素逆置后：" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << skr[i] << endl;
	}
	
	
	system ("pause");
	return 0;
}