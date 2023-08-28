#include <iostream>
#include <string>

using namespace std;

// 클래스 디폴트 생성자

class Class1
{
public:
	Class1() = default;	// 디폴트 생성자

public:
	int number;
	double prime;
	string word;
};

class Class2
{
public:
	Class2() {};

public:
	int number;
	double prime;
	string word;
};

int main()
{
	Class1* class1 = new Class1();
	cout << "Class1: " << class1->number << ", " << class1->prime << ", " << class1->word << endl;

	Class2* class2 = new Class2();
	cout << "Class2: " << class2->number << ", " << class2->prime << ", " << class2->word << endl;

	return 0;
}