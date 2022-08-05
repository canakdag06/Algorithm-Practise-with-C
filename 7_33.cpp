#include<stdio.h>
#include<locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Turkish");
	printf("Gün deðerini giriniz(1-7)= ");
	scanf("%d",&x);
	printf("--------------------------");
	
	switch(x){
		case 1: printf("\nGirdiðiniz deðer pazartesiye aittir.");break;
		case 2: printf("\nGirdiðiniz deðer salýya aittir.");break;
		case 3: printf("\nGirdiðiniz deðer çarþambaya aittir.");break;
		case 4: printf("\nGirdiðiniz deðer perþembeye aittir.");break;
		case 5: printf("\nGirdiðiniz deðer cumaya aittir.");break;
		case 6: printf("\nGirdiðiniz deðer cumartesiye aittir.");break;
		case 7: printf("\nGirdiðiniz deðer pazara aittir.");break;
	}
return 0;
}
