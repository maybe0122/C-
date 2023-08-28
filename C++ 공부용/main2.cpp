#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int arr1[5][5];
	int arr2[5][5];
	int arr3[5][5];


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr1[i][j] = i * 5 + j + 1;
			arr2[i][j] = i * 10 + (j+1) * 2;
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%2d ", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}