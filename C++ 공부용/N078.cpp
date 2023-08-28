#include <iostream>

using namespace std;

// const pointer의 이해

int main()
{
	int number1 = 10;
	int number2 = 20;

	// 상수 포인터
	// 가르키는 대상을 변경할 수 있지만 가르키는 대상의 값은 바꿀 수 없음

	int const* ptr1;	// const int* ptr1;
	ptr1 = &number1;
	ptr1 = &number2;
	

	// 포인터 상수
	// 초기값 필요
	// 가리키는 대상 변경 불가능
	int* const ptr2 = &number1;
	*ptr2 = number2;
	// *ptr2 = &number2; x

	return 0;
}