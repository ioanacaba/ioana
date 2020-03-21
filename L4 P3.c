//3.	Sa se realizeze un program care interschimba 2 valori folosind un pointer ca variabila auxiliara.
#include<stdio.h>

int main()
{
	int a, b, aux;
	int* p;
	p = &aux;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	*p = a;
	a = b;
	b = *p;
	printf("a=%d b=%d", a, b);
	system("pause");
	return 0;
}
