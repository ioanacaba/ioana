#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim_max 100

int plin(int *vf)
{
	if (*vf == dim_max - 1)
	{
		printf("stiva este plina");
		return 1;
	}
     	return 0;
}
int gol(int *vf)
{
	if (*vf == -1)
	{
		return 1;
	}
	    return 0;
}
void push(int *a, int *vf, int *stack)
{
	if (plin(stack, vf))
	{
		printf("Stiva este plina!\n");
		return;
	}
	else
	{
		++(*vf);
		*(stack + *vf) = *a;
	}
}
void pop(int *vf, int *stack)
{
	if (gol(stack, vf))
	{
		printf("Stiva este goala!\n");
		return;
	}
	else
	{
		--(*vf);
	}
}
int peek(int *vf, int *stack)
{
	return stack[*vf];
}
void afisare(int *vf, int *stack) {
	int *i = malloc(sizeof(int));
	printf("Stack: ");
	for (*i = 0; *i <= *vf; (*i)++)
	{
		printf("%d ", stack[*i]);
	}
	printf("\n");
}
int main()
{
	int*a, *i, *stack, *vf;
	 a= malloc(sizeof(int));
	 i= malloc(sizeof(int));
	 stack = malloc(sizeof(int)*dim_max);
	 vf = malloc(sizeof(int));
	*vf = -1;
	for (*i = 0; *i < 7; (*i)++)
	{
		printf("Valoarea este: ");
		scanf("%d", a);
		push(a, vf, stack);
	}
	afisare(vf, stack);
	printf("\n");

	while (!gol(vf))
	{
		printf("%d ", peek(vf, stack));
		pop(vf, stack);
	}
	system("pause");
	return 0;
}