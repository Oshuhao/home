#include<iostream>
using namespace std;
#include<string>
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
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
	Person p("�Ű���" , "xiaomi");
	cout << p.m_Name << "����:" << p.m_Phone.m_PName << endl;
}
int main ()
{
	test01();
	
	system("pause");
	return 0;
}



