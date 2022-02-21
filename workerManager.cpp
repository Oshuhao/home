#include "workerManager.h"
WorkerManager :: WorkerManager()
{

}
void WorkerManager :: Show_Menu()
{
	cout << "******************************************" << endl;
    cout << "*******欢 迎 使 用 职 工 管 理 系 统*******" << endl;
    cout << "*********      0.退出程序管理        **********" << endl;
    cout << "*********      1.增加职工信息        **********" << endl;
    cout << "*********      2.显示职工信息        **********" << endl;
    cout << "*********      3. 删除离职工人       **********" << endl;
    cout << "*********      4. 修改职工信息       **********" << endl;
    cout << "*********      5. 查找职工信息       **********" << endl;
    cout << "*********      6. 按照编号排序       **********" << endl;
    cout << "*********      7. 清空所有文档       **********" << endl;
    cout << "******************************************" << endl;
    cout << endl; }
WorkerManager :: ~WorkerManager()
{
	
}