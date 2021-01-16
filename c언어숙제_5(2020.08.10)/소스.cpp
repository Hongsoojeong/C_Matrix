#include <stdio.h>
#include <stdlib.h>
//틀은 다 맞춰놨는데, 같은 숫자 1쌍으로 이루어지도록 어떻게 배열을 짜지?
int main() {
	int row,col;
	int area;
	printf("Input width, height: ");
	scanf_s("%d %d", &row,&col);
	area = row * col;
	if (area % 2 == 1)
	{
		while (area % 2 != 0)
		{
			printf("Input width, height: ");
			scanf_s("%d %d", &row, &col);
			area = row * col;

		}
	}
	for (int i = 0,num; i < col; i++)
	{
		num = (rand() % (area / 2))+1;
		printf("%5d", num);
		for (int j = 1; j < row; j++)
		{
			num = (rand() % (area / 2)) + 1;
			printf("%5d", num);

		}
		printf("\n");
	}
	return 0;
}