#include<stdio.h>
#include<locale.h>

int main()
{
	int ay, kisi;
	setlocale(LC_ALL, "Turkish");
	printf("Hangi ayda(1-12) ve kaç kiþi tura katýlacaksýnýz?: ");
	scanf("%d %d",&ay,&kisi);
	printf("-------------------------------------------------");
	
	switch(ay)
	{
		case 12: case 1: case 2: printf("\nToplam borcunuz %d tl", kisi*150);break;
		case 3: case 4: case 5: printf("\nToplam borcunuz %d tl", kisi*50);break;
		case 6: case 7: case 8: printf("\nToplam borcunuz %d tl", kisi*50);break;
		case 9: case 10: case 11: printf("\nToplam borcunuz %d tl", kisi*250);break;
	}
return 0;
}
