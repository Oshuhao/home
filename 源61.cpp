#include<iostream>
using namespace std;
class Person
{
public:

	Person()
	{
		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
		
	}
	Person(int age )
	{
		
		cout << "Person�вι��캯������" << endl;
		m_Age = age;
	}
	Person (const Person & p)
	{
		cout << "Person�������캯������" << endl;
		m_Age = p.m_Age;
    }
	
    
	~Person()
	{
		cout << "~Person��������������" << endl;
	}
	int m_Age;
};
void test01()
{
	Person p1(20);
	Person p2(p1);
	Person p3(18);
	cout << "p2��ֵΪ��" << p2.m_Age << endl;
	cout << "p1��ֵΪ��" << p1.m_Age << endl;
	cout << "p3��ֵΪ��" << p3.m_Age << endl;
}
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}
Person doWork2()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p=doWork2();
	cout << (int*)&p << endl;
}
int main ()
{
	test03();
	
	system("pause");
	return 0;
}



