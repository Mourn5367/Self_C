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

void tri_1_1(int input_Num_value)
{
	int i = 0;

	for (i = 0; i < input_Num_value; i++)
	{
		tri_1_2(i);
	}
}

int main(void)

{
	int input_Num = 0;

	printf("ǥ���ϰ��� �ϴ� ���̸� �Է��Ͻø� *�� ���� �����ﰢ���� ��� �˴ϴ�.\n");

	scanf_s("%d", &input_Num);printf("\n");

	tri_1_1(input_Num);

	return 0;
}


