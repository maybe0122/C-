#include <iostream>
#include <string>

using namespace std;

// Ŭ���� �Ҹ��� �����ϱ�

class TempClass
{
public:
	TempClass()
	{
		cout << "������ ȣ��" << endl;
	};

	~TempClass()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main()
{
	TempClass* temp_class = new TempClass();

	// ��ü�� new�� �����ϸ� delete�� �����ϰ� �����ʹ� null�� ����������

	delete temp_class;
	temp_class = nullptr;

	return 0;
}