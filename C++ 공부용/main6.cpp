#include "Header.cpp"

int main()
{
	int v1 = getInt();
	
	int* s1 = (int*)malloc(sizeof(int) * v1);

	for (int i = 0; i < v1; ++i) {
		s1[i] = 2 * (i + 1);
		printf("%d\n", s1[i]);
	}
}

int getInt()
{
	int input;
	printf("숫자를 입력해 주세요: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}