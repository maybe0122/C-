#include "Header.cpp"

int main()
{
	char input[100];

	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", input);

	int index = 0;
	for (int i = 0; i < 100; ++i) {
		if (input[i] == '\0') {
			index = i - 1;
			break;
		}
	}

	for (int i = index; i >= 0; --i)
		printf("%c", input[i]);

	return 0;
}