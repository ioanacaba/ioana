
//3. Folosind doar operatii pe biti sa se verifice daca un numar introdus de la tastatura este pozitiv, negativ sau zero.
//Help: Trebuie sa cunoasteti dimensiunea tipului de date.Recomand sa folositi intregi, (int)
//	In cazul numere cu semn.
//	Bitul din cap este 0 ptr numere pozitive, iar negativ este 1

 #include<stdio.h>

int main()
{
	int x, k = 0;
	printf("X="); 
	scanf("%d", &x);   //numarul curent

	while (k != 7)                   //testare x=0
	{
		if ((1 & (x >> k)) == 1)
			break;
		k++;
	}
	if (k == 7)
		printf("Numarul citit este 0\n");

	if ((1 & (x >> 7)) == 0 && k != 7)
		printf("Numar pozititv\n");              //testare x>0
	else 
		if ((1 & (x >> 7)) == 1 && k != 7)
		printf("Numar negativ\n");         //testare x<0
	return 0;
}