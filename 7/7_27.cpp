#include<stdio.h>
#include<math.h>

int main()
{
	int yas,aday_1,aday_2,aday_3;
	printf("Yasinizi giriniz : ");
	scanf("%d",&yas);
	printf("Adaylarin yasini giriniz (3 adet) : ");
	scanf("%d %d %d",&aday_1,&aday_2,&aday_3);
	printf("----------------------------------");
	
	if(fabs(yas-aday_1) <= fabs(yas-aday_2) && fabs(yas-aday_1) <= fabs(yas-aday_3))
	printf("\nYasiniza en yakin 1 numarali adaydir. (Yas farki = %d)",(int)fabs(yas-aday_1));
	else if(fabs(yas-aday_2) <= fabs(yas-aday_1) && fabs(yas-aday_2) <= fabs(yas-aday_3))
	printf("\nYasiniza en yakin 2 numarali adaydir. (Yas farki = %d)",(int)fabs(yas-aday_2));
	else
	printf("\nYasiniza en yakin 3 numarali adaydir. (Yas farki = %d)",(int)fabs(yas-aday_3));
return 0;	 
} 
