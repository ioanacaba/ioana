//6. Se citeste de la tastatura un numar zecimal pana in 255. 
//Sa se afiseze forma binara a numarului iar apoi din sirul binar sa se genereze valoarea maxima:
// 
//27 -> 0001 1011 (val binara)
//1111 0000 – Valoarea maxima
//5 -> 0000 0101 (val binara)
//1100 0000 – Valoarea maxima

#include<stdio.h>
void baza(int n)
{
	int k = 0, n2, v[8];

	for (k = 0; k <= 7; k++)
		v[k] = 0;
	k = 0;
	n2 = n;
	while (n2 != 0)
	{
		if (n2 % 2 == 1) {
			v[k] = 1;
			k++;
		}
		else {
			v[k] = 0;
			k++;
		}
		n2 = n2 / 2;
	}
	for (k = 7; k >= 0; k--)
		printf("%d ", v[k]);
	printf("%d \n", n);
}
int main()
{
	unsigned int n, n2, numar_maxim = 0, v[8];
	int numarare = 0, k;
	printf("n="); scanf("%d", &n);
	baza(n);
	for (k = 0; k <= 7; k++)
		if ((1 & (n >> k)) == 1)
			numarare++;
	numar_maxim = 0;
	k = 7;
	while (numarare != 0)
	{
		numar_maxim = numar_maxim | (1 << k);
		k--;
		numarare--;
	}
	n = numar_maxim;
	baza(n);
	system("pause");
	return 0;
}