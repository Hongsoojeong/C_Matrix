#include <stdio.h>
#include <stdlib.h>
//Ʋ�� �� ������µ�, ���� ���� 1������ �̷�������� ��� �迭�� ¥��?
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