#include<stdio.h>

int main()
{
	int mac_1,mac_2,mac_3,isabet_1,isabet_2,isabet_3,hatali_1,hatali_2,hatali_3;
	
	printf("Birincinin oynadigi mac, isabetli ve hatali pas sayisini giriniz : ");
	scanf("%d %d %d",&mac_1,&isabet_1,&hatali_1);
	printf("Ikincinin oynadigi mac, isabetli ve hatali pas sayisini giriniz : ");
	scanf("%d %d %d",&mac_2,&isabet_2,&hatali_2);
	printf("Ikincinin oynadigi mac, isabetli ve hatali pas sayisini giriniz : ");	
	scanf("%d %d %d",&mac_3,&isabet_3,&hatali_3);
	printf("---------------------------------------------------------------");
	
	float ort_1 = (isabet_1 - hatali_1)/mac_1;
	float ort_2 = (isabet_2 - hatali_2)/mac_2;
	float ort_3 = (isabet_3 - hatali_3)/mac_3;
	
	if(ort_1 <= ort_2 && ort_1 <= ort_3)
	printf("\nEn kotu 1. oyuncudur.\nNet isabetli pas= %d,\nMac basina dusen net isabetli pas= %.2f",isabet_1-hatali_1,ort_1);
	else if(ort_2 <= ort_1 && ort_2 <= ort_3)
	printf("\nEn kotu 2. oyuncudur.\nNet isabetli pas= %d,\nMac basina dusen net isabetli pas= %.2f",isabet_2-hatali_2,ort_2);
	else
	printf("\nEn kotu 3. oyuncudur.\nNet isabetli pas= %d,\nMac basina dusen net isabetli pas= %.2f",isabet_3-hatali_3,ort_3);
	return 0;
}
