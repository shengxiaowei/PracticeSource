#include<iostream>

int Add(int, int); //����ԭ�� 

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

int Add(int a, int b) //��������
{
	return a + b;
}