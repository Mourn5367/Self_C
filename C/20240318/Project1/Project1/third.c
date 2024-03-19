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

	printf("표현하고자 하는 길이를 입력하시면 *로 꽉찬 직각삼각형이 출력 됩니다.\n");

	scanf_s("%d", &input_Height);printf("\n");

	tri_1_1(input_Height);

	return 0;
}


