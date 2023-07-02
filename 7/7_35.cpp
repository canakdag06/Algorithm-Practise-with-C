#include<stdio.h>
#include<locale.h>

int main()
{
	char kod;
	int adet;
	setlocale(LC_ALL, "Turkish");
	printf("Kullanýcý kodunu (A/a,B/b,C/c,D/d) ve adeti giriniz: ");
	scanf("%c %d",&kod,&adet);
	printf("----------------------------------------------------");
	
	switch(kod)
	{
		case 'A': case 'a': printf("\nBorcunuz %d",adet); break;
		case 'B': case 'b': printf("\nBorcunuz %d",adet*2); break;
		case 'C': case 'c':
		case 'D': case 'd': printf("\nBorcunuz %d",adet*3); break;
	}
return 0;
}
