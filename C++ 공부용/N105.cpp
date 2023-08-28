#include <iostream>
#include <string>

using namespace std;

// 클래스 생성자 정의하기

class KingInfo
{
public:
	KingInfo() // 생성자
	{
		name_ = "조선 예종 이황";
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
	KingInfo king_info;	// 객체 생성

	cout << king_info.GetName() << endl;

	return 0;
}