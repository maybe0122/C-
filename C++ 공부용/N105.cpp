#include <iostream>
#include <string>

using namespace std;

// Ŭ���� ������ �����ϱ�

class KingInfo
{
public:
	KingInfo() // ������
	{
		name_ = "���� ���� ��Ȳ";
	};

public:
	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;	// ��ü ����

	cout << king_info.GetName() << endl;

	return 0;
}