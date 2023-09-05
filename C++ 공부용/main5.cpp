#include "Header.cpp"

int main()
{
	int v1, v2;

	int* pv1 = &v1, *pv2 = &v2;

	*pv1 = getInt();
	*pv2 = getInt();

	printf("%d + %d = %d\n", v1, v2, *pv1 + *pv2);
	printf("%d - %d = %d\n", v1, v2, *pv1 - *pv2);
	printf("%d x %d = %d\n", v1, v2, *pv1 * *pv2);
	printf("%d / %d = %d\n", v1, v2, *pv1 / *pv2);

	return 0;
}

int getInt()
{
	int input;
	printf("숫자를 입력해 주세요: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}