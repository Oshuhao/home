#include<iostream>
using namespace std;
#include "workerManager.h"
int main() {
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ£º" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
				break;
			case1:
				break;
			case2:
				break;
			case3:
				break;
			case4:
				break;
			case5:
				break;
			case6:
				break;
			case7:
				break;
		default:
			system("cls");
				break;
		}

	}
	wm.Show_Menu();
	system("pause");
	return 0;



}