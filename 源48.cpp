#include<iostream>
using namespace std;
#include< string>;
struct Student
{
	string name;
	int age;
	int score;

}s3; 
int main()
{
	struct Student s1;
	s1.name = "��ĳ��";
	s1.age = 19;
	s1.score = 88;
	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;
	struct Student s2 = { "����",19,99 };
		cout << "������" << s2.name << "���䣺" << s2.age << "������" << s2.score << endl;
		s3.name = "ף��";
			s3.age = 20;
		s3.score = 60;
		cout << "������" << s3.name << "���䣺" << s3.age << "����" << s3.score << endl;
	
	
	
	system("pause");
	return 0;
}

