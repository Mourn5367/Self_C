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

	printf("ǥ���ϰ��� �ϴ� ���̸� �Է����ּ���.\n");
	scanf_s("%d", &row);
	getchar();

	printf("������ �ִ� ������ �����ֽʽÿ�. (L / R)\n");

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
