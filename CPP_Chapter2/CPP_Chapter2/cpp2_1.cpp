#include<iostream>  //�ڱ���֮ǰʹԤ������ ��iostream�ļ���ӵ�������
//Ԥ��������Ԥ����ָ��)
//1.�궨�壻 2.�ļ������� 3.�������롣 Ԥ����ָ���Է��š�#����ͷ

int main() //int main(void) C�п���ʡ�Ժ�����������(Ĭ�Ϸ�������Ϊint)��C++����ʾ˵��
{
	//using namespace std;
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Compe up and C++ me some time"; //cout ��һ���� ʾ�������ඨ�������ݵĴ洢��ʹ�÷�ʽ
	cout << endl;							 //<<�����������C++�����������C++�����û����¶������������
	cout << "You won't regret it" << endl;	 //������ͨ����������ȷ��������ĺ��壬C�е���������� ��* & ��
								//endl ���Ʒ�����C++��һ������ķ��ţ�����һ��
	return 0;

	//return 0; //������Ĭ����һ��return 0; ���
}

//DLLģ�鲻�Ƕ����ĳ�����˲���Ҫmain()����

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
