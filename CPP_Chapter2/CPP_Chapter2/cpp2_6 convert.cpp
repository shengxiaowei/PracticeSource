#include<iostream>

int Add(int, int); //函数原型 

int main(void)
{
	using namespace std;
	cout << "input a = ";
	int ia;
	cin >> ia;
	cout << endl;
	cout << "input b = ";
	int ib;
	cin >> ib;
	cout << "show a + b = " << Add(ia, ib) << endl;;

	return 0;
}

int Add(int a, int b) //函数定义
{
	return a + b;
}