#include<iostream>
using namespace std;
class Person
{
public:

	Person()
	{
		cout << "Person�� �޲ι��캯���ĵ���" << endl;
	}
	Person(int a )
	{
		age =  a;
		cout << "Person ���вι��캯���ĵ���" << endl;
	}
	Person (const Person &p)
	{
		cout << "Person�Ŀ������캯��" << endl;
		age = p.age;
    }
	
    
	~Person()
	{
		cout << "~Person��������������" << endl;
	}
	int age;
};
void test01()
{
	Person p;
	Person p2(10);
	Person p3(9999);
	cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3����ֵΪ��" << p3.age << endl;
}

int main ()
{
	test01();
	
	system("pause");
	return 0;
}



