
#include <stdio.h>



int main(void)
{

	int a = 14;

	printf("1. %d\n", a);

	// a ������ ���� ���
	
	int b = 20;

	int* p = NULL;

	p = &a;

	int  c = *p;

	a = 15;

	printf("2. %d\n", c);

	printf("3. %p\n", &c);
	
	printf("4. %d\n", *p);
	

	
	
	*p = b;

	printf("%p\n", &c);

	printf("%p\n", &a);

	// ���� a�� �ּҸ� ���

	printf("%p\n", p);
	printf("%d\n", *p);

	// ������ p�� �ּҸ� ���

	printf("%d\n", a);

	b = 10;
	// ���� a�� ���� ���
	while (a > 0)
	{
		a = a + 1;
		printf("%d\n\n", a);
		
		b = (b -1)*2;
		printf("%d\n\n", b);
	}
	return 0;


}