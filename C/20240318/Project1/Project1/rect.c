#include <stdio.h>


void emptyRect(int row, int col) // 빈 직사각형
{
	for (int i = 1; i <= col; i++)
	{

		for (int j = 1; j <= row; j++)
		{
			if (i == 1 || col == i ||
				j == 1 || row == j)
				// 처음과 끝부분은 * 덮어야 함.
			{
				printf(" * ");
			}
			else
				printf(" . ");

			if (j == row)
			{
				printf("\n");
			}
		}
	}
}
void noneEmptyRect(int row, int col) // 꽉찬 직사각형
{
	for (int i = 1; i <= col; i++)
	{

		for (int j = 1; j <= row; j++)
		{

			printf(" * ");

			if (j == row)
			{
				printf("\n");
			}
		}
	}
}

int main(void)
{

	int row = 0;
	// 가로열
	int col = 0;
	// 세로열

	char rectBool;

	printf("직사각형의 가로 길이를 입력 해 주세요\n");
	scanf_s("%d", &row);

	printf("직사각형의 세로 길이를 입력 해 주세요\n");
	scanf_s("%d", &col);

	getchar();
	// 안넣으니 다음 입력때 오류남

	printf("내부가 *로 꽉찬 직사각형을 원하십니까? (Y / N)\n");

	scanf_s("%c", &rectBool);
	//printf("%c\n", rectBool);
	if (rectBool == 'Y')
	{
		noneEmptyRect(row, col);
	}
	else if (rectBool == 'N')
	{
		noneEmptyRect(row, col);
	}

	

}