#include<iostream>  //在编译之前使预处理器 将iostream文件添加到程序中
//预处理器（预处理指令)
//1.宏定义； 2.文件包含； 3.条件编译。 预处理指令以符号“#”开头

int main() //int main(void) C中可以省略函数返回类型(默认返回类型为int)，C++中显示说明
{
	//using namespace std;
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Compe up and C++ me some time"; //cout 是一个类 示例，改类定义了数据的存储和使用方式
	cout << endl;							 //<<插入运算符，C++重载运算符，C++允许用户重新定义运算符含义
	cout << "You won't regret it" << endl;	 //编译器通过上下文来确定运算符的含义，C中的运算符重载 有* & 等
								//endl 控制符，是C++中一个特殊的符号，重起一行
	return 0;

	//return 0; //编译器默认有一个return 0; 语句
}

//DLL模块不是独立的程序，因此不需要main()函数

/*
#include<iostream>
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Compe up and C++ me some time";
	cout << endl;
	cout << "You won't regret it" << endl;

	return 0;
}
*/
