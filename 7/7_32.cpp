#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int x;
	printf("Ay deðerini giriniz(1-12)= ");
	scanf("%d",&x);
	printf("--------------------------");
	
	switch(x){
	case 1: printf("\nGirdiðiniz deðer Ocak ayýdýr"); break;
	case 2: printf("\nGirdiðiniz deðer Þubat ayýdýr"); break;
	case 3: printf("\nGirdiðiniz deðer Mart ayýdýr"); break;
	case 4: printf("\nGirdiðiniz deðer Nisan ayýdýr"); break;
	case 5: printf("\nGirdiðiniz deðer Mayýs ayýdýr"); break;
	case 6: printf("\nGirdiðiniz deðer Haziran ayýdýr"); break;
	case 7: printf("\nGirdiðiniz deðer Temmuz ayýdýr"); break;
	case 8: printf("\nGirdiðiniz deðer Aðustos ayýdýr"); break;
	case 9: printf("\nGirdiðiniz deðer Eylül ayýdýr"); break;
	case 10: printf("\nGirdiðiniz deðer Ekim ayýdýr"); break;
	case 11: printf("\nGirdiðiniz deðer Kasým ayýdýr"); break;
	case 12: printf("\nGirdiðiniz deðer Aralýk ayýdýr"); break;
	}
return 0;
}
