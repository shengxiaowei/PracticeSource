#include<iostream> //iostream类库； cin cout 都是类库中的类对象；cin是类istream 对象，cout是类ostream 对象
				  //C++ 头文件 没有扩展名，去掉.h使其成为C++风格的名称
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