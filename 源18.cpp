#include <iostream>
using namespace std;
#include <string>

int main() {
	//������ص���100kg ��Ϊ���彡��������Ļ�����
	// �û���������
	//��ӡ�û����������
	//�ж������Ƿ����100kg��������ڣ���ô���������
	//�ж�����Ƿ����200cm ��������ڣ���ô����߸��ӣ�����������ĸ���ƫ����
	int weight = 0;
	cout << "��������������" << endl;
	cin >> weight;
	cout << "�����������Ϊ��" << weight << endl;
	int height = 0;
	cout << "�������������" << endl; cin >> height;
	cout <<"����������Ϊ��" << height << endl;

	if (weight<200)
	
	
	{
		cout << "��������ܽ���" << endl;
	}
	else {
		cout << "��������ƫ����ע����ʳ" << endl;
	}
	if (height > 200)
	{
		cout << "�����ڸ߸���" << endl;
	}
	else
	{
		cout << "���ĸ���ƫ��" << endl;

	}
	
	

	system("pause");
	
	return 0;
}