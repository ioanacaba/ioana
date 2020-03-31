#include<stdio.h>
void push(int x, int *stiva_1, int *varful_stiva_1, int *stiva_2, int *varful_stiva_2)
{
	int copie, ok = 0;
	copie = x;
	while (copie != 0)
	{
		(*varful_stiva_1)++;
		stiva_1[*varful_stiva_1] = copie % 10;
		copie = copie / 10;
	}
	ok = palindrom(stiva_1, varful_stiva_1);
	if (ok == 1)
	{
		printf("Numarul %d este palindrom!\n", x);
		(*varful_stiva_2)++;
		stiva_2[*varful_stiva_2] = x;
	}
}
int palindrom(int* stiva, int* varf)
{
	int i, ok = 1;
	for (i = 0; i <= *varf; i++)
		if (stiva[i] != stiva[*(varf)-i])ok = 0;  
	return ok;
}
int peek(int* stiva, int* varf)
{
	return *varf;
}
int pop(int* stiva, int* varf)
{
	return --(*varf);
}
void afisare(int *stiva, int varf)
{
	int i;
	for (i = 0; i <= varf; i++)
		printf("%d ", stiva[i]);
	printf("\n");
}
int main()
{
	int n, x, i, stiva_1[7], varful_stiva_1 = -1, varful_stiva_2 = -1, stiva_2[100];
	printf("n="); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		varful_stiva_1 = -1;
		printf("x="); scanf("%d", &x);
		push(x, &stiva_1, &varful_stiva_1, &stiva_2, &varful_stiva_2);
	}
	afisare(&stiva_2, varful_stiva_2);
	printf("\n");
	printf("Peek=%d", stiva_2[peek(&stiva_2, &varful_stiva_2)]);
	printf("\n");
	varful_stiva_2 = pop(&stiva_2, &varful_stiva_2);
	afisare(&stiva_2, varful_stiva_2);
	system("pause");
	return 0;
}