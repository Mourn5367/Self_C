#include <stdio.h>

void tri_1_2(int row)
{
	
	for (int j = 0; j <= row; j++)
	{
		
		if (j == row)
		{
			printf("*\n");
			break;
		}
		else printf("* ");
	}
}

void tri_1_1(int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		tri_1_2(i);
	}
}

int main(void)

{
	int input_Height = 0;

	printf("ǥ���ϰ��� �ϴ� ���̸� �Է��Ͻø� *�� ���� �����ﰢ���� ��� �˴ϴ�.\n");

	scanf_s("%d", &input_Height);printf("\n");

	tri_1_1(input_Height);

	return 0;
}


