#include <stdio.h>


void emptyRect(int row, int col) // �� ���簢��
{
	for (int i = 1; i <= col; i++)
	{

		for (int j = 1; j <= row; j++)
		{
			if (i == 1 || col == i ||
				j == 1 || row == j)
				// ó���� ���κ��� * ����� ��.
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
void noneEmptyRect(int row, int col) // ���� ���簢��
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
	// ���ο�
	int col = 0;
	// ���ο�

	char rectBool;

	printf("���簢���� ���� ���̸� �Է� �� �ּ���\n");
	scanf_s("%d", &row);

	printf("���簢���� ���� ���̸� �Է� �� �ּ���\n");
	scanf_s("%d", &col);

	getchar();
	// �ȳ����� ���� �Է¶� ������

	printf("���ΰ� *�� ���� ���簢���� ���Ͻʴϱ�? (Y / N)\n");

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