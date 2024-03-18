#include <stdio.h>


int main(void)
{


	int i = 0;
	int j = 0;

	printf("구구단을 시작할 숫자를 적어주십시오\n");
	


	scanf_s("%d", &i );
	


	printf("구구단을 끝낼 숫자를 적어주십시오\n");

	scanf_s("%d", &j );

		
		for(; i <= j; i++)
		{			
			printf("%d * %d = %d\n", i, i, i * i);			
		}
	

	return 0;
}