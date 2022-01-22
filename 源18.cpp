#include <iostream>
using namespace std;
#include <string>

int main() {
	//如果体重低于100kg 视为身体健康，在屏幕上输出
	// 用户输入体重
	//打印用户输入的体重
	//判断体重是否大于100kg，如果大于，那么输出健康。
	//判断身高是否大于200cm ，如果大于，那么输出高个子，否则输出您的个子偏矮。
	int weight = 0;
	cout << "请输入您的体重" << endl;
	cin >> weight;
	cout << "您输入的体重为：" << weight << endl;
	int height = 0;
	cout << "请输入您的身高" << endl; cin >> height;
	cout <<"您输入的身高为：" << height << endl;

	if (weight<200)
	
	
	{
		cout << "您的身体很健康" << endl;
	}
	else {
		cout << "您的身体偏胖请注意饮食" << endl;
	}
	if (height > 200)
	{
		cout << "您属于高个子" << endl;
	}
	else
	{
		cout << "您的个子偏矮" << endl;

	}
	
	

	system("pause");
	
	return 0;
}