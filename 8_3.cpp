#include<stdio.h>

int main()
{
	printf("ASCII KOD		B. KARAKTER			K. KARAKTER");
	printf("\n---------		-----------			-----------");
	int i;
	for(i=65;i<=84;i++)
		printf("\n%d			%c				%c",i,i,i+32);
return 0;
}
