#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int stiva_plina(int* stiva, int* varful_stivei)
{
   if (*varful_stivei == 6)
	   return 0;
   else
	   return 1;
}
void stiva_goala(int* stiva, int* varful_stivei)
{
	if (*varful_stivei == -1)
		printf("Stiva este goala!\n");
	else
		printf("Stiva contine cateva elemente\n");
}
int peek(int* stiva, int* varful_stivei)
{
	return stiva[*varful_stivei];
}
void push(int* x, int* stiva, int* varful_stivei)
{
	if (stiva_plina(stiva, varful_stivei) == 0) printf("Stiva este plina!\n");
	else
	{
		++(*varful_stivei);
		stiva[*varful_stivei] = *x;
	}
}
int pop(int* stiva, int* varful_stivei)
{
	return --(*varful_stivei);
}
void afisare_stiva(int* varful_stivei, int* stiva)
{
	int* i = (int*)malloc(sizeof(int));

	for (*i = 0; *i <= *varful_stivei; (*i)++)
	{
		printf("%d ", stiva[*i]);
	}
	printf("\n");
}
int main()
{
	int* stiva, *varful_stivei, *opt, *x, vf1;
	int* i = (int*)malloc(sizeof(int));
	varful_stivei = (int*)malloc(sizeof(int));
	x = (int*)malloc(sizeof(int));
	stiva = (int*)malloc(1000 * sizeof(int));
	*varful_stivei = -1;

	stiva_plina(stiva, varful_stivei);
	stiva_goala(stiva, varful_stivei);
	for (*i = 0; *i < 7; (*i)++)
	{
		printf("stiva[%d]=", (*i) + 1);
		scanf("%d", x);
		push(x, stiva, varful_stivei);
	}
	printf("\n");
	afisare_stiva(varful_stivei, stiva);
	printf("\n");
	stiva_goala(stiva, varful_stivei);
	printf("\n");
	printf("peek: %d\n\n", peek(stiva, varful_stivei));
	pop(stiva, varful_stivei);
	printf("Pop:");
	afisare_stiva(varful_stivei, stiva);
	printf("\n");
	system("pause");
	return 0;
}