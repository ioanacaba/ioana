//2.	Sa se scrie un program care insumeaza elementele intr - o metoda separate de metoda main,
//folosind transmiterea prin referinta.
#include<stdio.h>

void suma(int n, int *s)
{
	*s = *s + n;
}
int main()
{
	int n, s = 0;
	do
	{

		printf("n="); scanf("%d", &n);
		suma(n, &s);

	} while (n != 0);
	printf("%d", s);
	system("pause");
	return 0; 
}