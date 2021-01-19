#include<iostream>
int main()
{
	using namespace std;
	int carrots = 25; //尽可能在首次使用变量前声明它。
					 //定义声明 并初始化，编译器将为变量分配内存空间，carrots表示存储在这里的数据使用的名称
	cout << "I have " << carrots << " carrots." << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have" << carrots << " carrots." << endl;
	

	return 0;
}