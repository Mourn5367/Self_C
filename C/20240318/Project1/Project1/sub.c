#include <stdio.h>


int main(void)
{


	int i = 0;
	int j = 0;

	printf("�������� ������ ���ڸ� �����ֽʽÿ�\n");
	


	scanf_s("%d", &i );
	


	printf("�������� ���� ���ڸ� �����ֽʽÿ�\n");

	scanf_s("%d", &j );

		
		for(; i <= j; i++)
		{			
			printf("%d * %d = %d\n", i, i, i * i);			
		}
	

	return 0;
}