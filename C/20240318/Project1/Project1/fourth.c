#include <stdio.h>
int square_2(int row)
{
	for (int j = 0; j <= row; j++)
	{
		if (j == row)
		{
			printf("\n");
			break;
		}
		else printf(" *");
	}
}
int square_1(int input_Num_value)
{
	

	int i = 0;

	for (i = 0; i < input_Num_value; i++)
	{
		square_2(input_Num_value);
	}

}

int main(void)

{
	int input_Num = 0;

	printf("표현하고자 하는 길이를 입력하시면 꽉찬 정사각형이 출력 됩니다.\n");

	scanf_s("%d", &input_Num);
	square_1(input_Num);

	return 0;
}


