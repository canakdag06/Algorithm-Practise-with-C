#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int x;
	printf("Ay de�erini giriniz(1-12)= ");
	scanf("%d",&x);
	printf("--------------------------");
	
	switch(x){
	case 1: printf("\nGirdi�iniz de�er Ocak ay�d�r"); break;
	case 2: printf("\nGirdi�iniz de�er �ubat ay�d�r"); break;
	case 3: printf("\nGirdi�iniz de�er Mart ay�d�r"); break;
	case 4: printf("\nGirdi�iniz de�er Nisan ay�d�r"); break;
	case 5: printf("\nGirdi�iniz de�er May�s ay�d�r"); break;
	case 6: printf("\nGirdi�iniz de�er Haziran ay�d�r"); break;
	case 7: printf("\nGirdi�iniz de�er Temmuz ay�d�r"); break;
	case 8: printf("\nGirdi�iniz de�er A�ustos ay�d�r"); break;
	case 9: printf("\nGirdi�iniz de�er Eyl�l ay�d�r"); break;
	case 10: printf("\nGirdi�iniz de�er Ekim ay�d�r"); break;
	case 11: printf("\nGirdi�iniz de�er Kas�m ay�d�r"); break;
	case 12: printf("\nGirdi�iniz de�er Aral�k ay�d�r"); break;
	}
return 0;
}
