#include<iostream>
using namespace std;
class Person
{
public:

	Person()
	{
		cout << "Person的 无参构造函数的调用" << endl;
	}
	Person(int a )
	{
		age =  a;
		cout << "Person 的有参构造函数的调用" << endl;
	}
	Person (const Person &p)
	{
		cout << "Person的拷贝构造函数" << endl;
		age = p.age;
    }
	
    
	~Person()
	{
		cout << "~Person的析构函数调用" << endl;
	}
	int age;
};
void test01()
{
	Person p;
	Person p2(10);
	Person p3(9999);
	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的数值为：" << p3.age << endl;
}

int main ()
{
	test01();
	
	system("pause");
	return 0;
}



