#include <iostream>

using namespace std;

// const pointer�� ����

int main()
{
	int number1 = 10;
	int number2 = 20;

	// ��� ������
	// ����Ű�� ����� ������ �� ������ ����Ű�� ����� ���� �ٲ� �� ����

	int const* ptr1;	// const int* ptr1;
	ptr1 = &number1;
	ptr1 = &number2;
	

	// ������ ���
	// �ʱⰪ �ʿ�
	// ����Ű�� ��� ���� �Ұ���
	int* const ptr2 = &number1;
	*ptr2 = number2;
	// *ptr2 = &number2; x

	return 0;
}