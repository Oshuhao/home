#include<iostream>
using namespace std;
class Cube
{
public:
	void setL(int l)
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}
	void setW(int w)
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}
	void setH(int h)
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;

	}
	int calculateV()
	{
		return m_L * m_W * m_H;


	}
	bool isSameBClass(Cube &c)
	{
		if (m_L == c.getL() && c.getW() == c.getW() && c.getH() == c.getH())
		{
			return true;
		}
		return false;
	}
private:
	int m_L;
	int m_W;
	int m_H;


};
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;

	}
	return false;
}

int main ()
{
	Cube c1;
	c1.setL(19);
	c1.setW(110);
	c1.setH(222);
	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "cl�����Ϊ��" << c1.calculateV() << endl;

	
	Cube c2;
	c2.setL(10);
	c2.setW(110);
	c2.setH(222);
	
	bool ret =  isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2���" << endl;

	}
	else
	{
		cout << "c1��c2�����" << endl;
	}

	ret = c1.isSameBClass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2���" << endl;

	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�����" << endl;
	}
	system("pause");
	return 0;
}



