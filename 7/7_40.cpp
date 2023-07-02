#include<stdio.h>

int main()
{
	int sayi,son;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("----------------");
	
	if((sayi%1000)<=500)
		son= sayi - (sayi%1000);
	else if((sayi%1000)>500)
		son= sayi - (sayi%1000) + 1000;
	printf("\nGirilen %d sayisinin yuvarlatilmis hali %d dir",sayi,son);
return 0;
}
