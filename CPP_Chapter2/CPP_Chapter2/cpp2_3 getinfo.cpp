#include<iostream> //iostream��⣻ cin cout ��������е������cin����istream ����cout����ostream ����
				  //C++ ͷ�ļ� û����չ����ȥ��.hʹ���ΪC++��������
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more .";
	carrots = carrots + 2;
	cout << "Now you have" << carrots << " carrots " << endl;

	return 0;
}