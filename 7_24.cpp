#include<stdio.h>

int main()
{
	int sermaye_1,sermaye_2,sermaye_3,gelir_1,gelir_2,gelir_3,total_1,total_2,total_3;
	
	printf("Birincinin sermayesi ve yillik getirisi: ");
	scanf("%d %d",&sermaye_1,&gelir_1);
	printf("Ikincinin sermayesi ve yillik getirisi: ");
	scanf("%d %d",&sermaye_2,&gelir_2);
	printf("Ucuncunun sermayesi ve yillik getirisi: ");
	scanf("%d %d",&sermaye_3,&gelir_3);
	printf("------------------------------------------");
	
	total_1 = 15*gelir_1 - sermaye_1;
	total_2 = 15*gelir_2 - sermaye_2;
	total_3 = 15*gelir_3 - sermaye_3;
	
	if(total_1 >= total_2 && total_1 >= total_3)
	printf("\nEn karli yatirim 1. yatirimdir.\nToplam getiri= %d, net kar= %d",15*gelir_1,total_1);
	else if(total_2 >= total_1 && total_2 >= total_3)
	printf("\nEn karli yatirim 2. yatirimdir.\nToplam getiri= %d, net kar= %d",15*gelir_2,total_2);
	else
	printf("\nEn karli yatirim 3. yatirimdir.\nToplam getiri= %d, net kar= %d",15*gelir_3,total_3);
	return 0;
}
