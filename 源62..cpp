#include<iostream>
using namespace std;
#include<string>
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
      string m_PName;
};
class Person
{

public:
	Person(string name, string pName):m_Name(name),m_Phone(pName)
	{


	}



	string m_Name;
	Phone m_Phone;

};
void test01()
{
	Person p("张爱国" , "xiaomi");
	cout << p.m_Name << "拿着:" << p.m_Phone.m_PName << endl;
}
int main ()
{
	test01();
	
	system("pause");
	return 0;
}



