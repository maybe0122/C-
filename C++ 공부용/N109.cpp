#include <iostream>
#include <string>

using namespace std;

// 클래스 소멸자 정의하기

class TempClass
{
public:
	TempClass()
	{
		cout << "생성자 호출" << endl;
	};

	~TempClass()
	{
		cout << "소멸자 호출" << endl;
	}
};

int main()
{
	TempClass* temp_class = new TempClass();

	// 객체를 new로 생성하면 delete로 삭제하고 포인터는 null로 만들어줘야함

	delete temp_class;
	temp_class = nullptr;

	return 0;
}