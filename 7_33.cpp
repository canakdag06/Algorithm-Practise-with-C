#include<stdio.h>
#include<locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "Turkish");
	printf("G�n de�erini giriniz(1-7)= ");
	scanf("%d",&x);
	printf("--------------------------");
	
	switch(x){
		case 1: printf("\nGirdi�iniz de�er pazartesiye aittir.");break;
		case 2: printf("\nGirdi�iniz de�er sal�ya aittir.");break;
		case 3: printf("\nGirdi�iniz de�er �ar�ambaya aittir.");break;
		case 4: printf("\nGirdi�iniz de�er per�embeye aittir.");break;
		case 5: printf("\nGirdi�iniz de�er cumaya aittir.");break;
		case 6: printf("\nGirdi�iniz de�er cumartesiye aittir.");break;
		case 7: printf("\nGirdi�iniz de�er pazara aittir.");break;
	}
return 0;
}
