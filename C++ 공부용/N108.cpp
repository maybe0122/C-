#include <iostream>
#include <string>

using namespace std;

// Ŭ���� ������ �ʱ�ȭ ����Ʈ

class TmpClass
{
private:
	int number1 = 1;
	const int number2 = 2;
	static const int number3 = 3;
	string name = "����: ����� �Ƶ�";

public:
	TmpClass() : number1(10), number2(20), name("���� : ���ڸ�� �̸�") {}

	void Print()
	{
		cout << number1 << ", " << number2 << ", " << number3 << ", " << name << endl;
	}
};

int main()
{
	TmpClass tc;
	tc.Print();

	return 0;
}