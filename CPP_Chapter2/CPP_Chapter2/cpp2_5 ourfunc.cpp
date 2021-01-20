#include<iostream>

void simon(int); ////º¯ÊýÔ­ÐÍ

int main(void)
{
	using namespace std;
	simon(12);
	cout << "pick a integer ";
	int count;
	cin >> count;
	cout << "show cin count value:" << endl;
	simon(count);

	return 0;
}
void simon(int n)
{
	using namespace std;
	cout << "show simon :" << n << endl;
}