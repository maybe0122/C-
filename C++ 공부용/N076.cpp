#include <iostream>

using namespace std;

// Call by Address

void Func()
{
	int test;
	cout << sizeof(&test) << endl;
	cout << sizeof(int *) << endl;
	cout << sizeof(int &) << endl;
}

int main()
{
	Func();

	return 0;
}