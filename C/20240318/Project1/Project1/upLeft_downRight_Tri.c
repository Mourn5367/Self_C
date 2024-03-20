#include <stdio.h>

void upRightTri(int row)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row; j++)
		{

			if (i != 1 && j < i)
			{
				printf(" . ");
			}
			else
			{
				printf(" * ");
			}
			if (j == row)
			{
				printf("\n");
			}
		}
	}
}

void upLeftTri(int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= row; j++)
		{
			if (j == row)
			{
				printf("\n");
				break;
			}
			if (row - i > j || i == 0)
			{
				printf(" * ");
			}
			else
			{
				printf(" . ");
			}
			if (j == row)
			{
				printf("\n");
			}
		}
	}
}
int main(void)
{
	int row = 7;
	char leftRightBool;

	printf("표현하고자 하는 길이를 입력해주세요.\n");
	scanf_s("%d", &row);
	getchar();

	printf("직각이 있는 방향을 정해주십시오. (L / R)\n");

	scanf_s("%c", &leftRightBool);
	if (leftRightBool == 'R' || leftRightBool == 'r')
	{
		upRightTri(row);
	}
	else if (leftRightBool == 'L' || leftRightBool == 'l')
	{
		upLeftTri(row);
	}

}
