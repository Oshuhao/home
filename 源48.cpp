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
	s1.name = "胡某人";
	s1.age = 19;
	s1.score = 88;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score << endl;
	struct Student s2 = { "佚名",19,99 };
		cout << "姓名：" << s2.name << "年龄：" << s2.age << "分数：" << s2.score << endl;
		s3.name = "祝融";
			s3.age = 20;
		s3.score = 60;
		cout << "姓名：" << s3.name << "年龄：" << s3.age << "分数" << s3.score << endl;
	
	
	
	system("pause");
	return 0;
}

