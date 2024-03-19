#include <stdio.h>


void tri_1(int row)
{
	for (int j = 0; j <= row; j++)
	{
		if (j == row)
		{
			printf("\n");
			break;
		}
		printf(" *");
	}
}

int main(void)

{
	int c = 0;
	int i = 0;

	scanf_s("%d", &c);	

	for (i = 0; i < c; i++)
	{
		tri_1(i);
		//void asdf(int row)
		//{
		//	for (int j = 0; j <= row; j++)
		//	{
		//		if (j == row)
		//		{
		//			printf("\n");
		//			break;
		//		}
		//		printf(" *");
		//	}
		//}
	}

	return 0;
}
