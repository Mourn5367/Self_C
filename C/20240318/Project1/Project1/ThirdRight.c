#include <stdio.h>

void tri_1_2(int row,int nowCol)
{

	int nowRow = 1;
	for (int j = 0; j <= row; j++)
	{

			if (row - (nowRow + nowCol) > 0)
			{
				printf(" . ");
				nowRow++;
			}
			else if (j == row)
			{
				printf("\n");
				break;
			}
			else if (row - (nowRow + nowCol) == 0)
			{
				printf(" * ");
			}
			
	}
}

void tri_1_1(int height)
{
	int nowheight = 0;
	for (nowheight = 0; nowheight < height; nowheight++)
	{
		tri_1_2(height, nowheight);
	}
}

 int main(void)

{
	int input_Height = 0;

	printf("ǥ���ϰ��� �ϴ� ���̸� �Է��Ͻø� *�� ���� �����ﰢ���� ��� �˴ϴ�.\n");

	scanf_s("%d", &input_Height); printf("\n");

	tri_1_1(input_Height);

	return 0;
}


