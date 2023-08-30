#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

// 실수 한개를 입력받아 리턴해주는 함수
float getNum();

// 문자 한개를 입력받아 리턴해주는 함수
char getChar();

// 무작위 연산자를 고르고 Calulater를 실행한는 함수
void random_op(float x, float y);

// 실수 두개와 연산자 한개를 인자로 받고 계산결과를 출력해주는 함수
void Calulator(float x, float y, char op);

int main()
{
	float n1 = getNum();
	float n2 = getNum();
	char op = getChar();

	Calulator(n1, n2, op);
}

float getNum()
{
	float number;
	printf("Enter Number: ");
	scanf("%f", &number);

	return number;
}

char getChar()
{
	char ch;
	printf("Enter Operator: ");
	scanf(" %c", &ch);

	return ch;
}

void random_op(float x, float y)
{
	char oper[8] = { '-', '+', '*', '/', '%', 'p', 'x'};

	srand((unsigned)time(NULL));

	char random_oper = oper[rand() % 7];

	printf("Choosed Operator is %c\n", random_oper);

	Calulator(x, y, random_oper);
}

void Calulator(float x, float y, char op)
{
	switch (op)
	{
	case '-':
		printf("result: %.3f\n", x - y);
		break;
	case '+':
		printf("result: %.3f\n", x + y);
		break;
	case '*':
		printf("result: %.3f\n", x * y);
		break;
	case '/':
		printf("result: %.3f\n", x / y);
		break;
	case '%':
		printf("result: %d\n", (int)x % (int)y);
		break;
	case 'p':
	case 'P':
		printf("result: %.3f\n", pow(x, y));
		break;
	case 'x':
	case 'X':
		break;
	case 'r':
	case 'R':
		random_op(x, y);
		break;
	default:
		printf("Wrong Operator\n");
		break;
	}
}