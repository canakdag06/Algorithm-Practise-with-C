#include<stdio.h>

int main()
{
	int yas,silindir;
	char tur;
	printf("Arac turunu giriniz (M/m: Minibus, P/p: Panelvan): ");
	scanf("%c",&tur);
	printf("\nAracin yasini giriniz: ");
	scanf("%d",&yas);
	
	switch(tur)
	{
	case 'M': case 'm':
		{
		if(yas>0 && yas<=6)
		printf("\n2011 yili MTV tutari: 523.00 TL\nTaksit bedeli (MTV tutarinin yarisi): 261.50 TL");break;
		if(yas>6 && yas<=15)
		printf("\n2011 yili MTV tutari: 346.00 TL\nTaksit bedeli (MTV tutarinin yarisi): 173.00 TL");break;
		if(yas>=16)
		printf("\n2011 yili MTV tutari: 172.00 TL\nTaksit bedeli (MTV tutarinin yarisi): 86.00 TL");break;
		}
	case 'P': case 'p':
		{
		printf("\nAracin silindir hacmini giriniz: ");
		scanf("%d",&silindir);
		if(yas>0 && yas<=6)
		{
			if(silindir<=1900)
			{printf("2011 yili MTV tutari: 697.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 348.50 TL");break;}
			if(silindir>=1901)
			{printf("2011 yili MTV tutari: 1.052.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 526.00 TL");break;}
		}
		if(yas>=7 && yas<=15)
		{
			if(silindir<=1900)
			{printf("2011 yili MTV tutari: 436.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 218.00 TL");break;}
			if(silindir>=1901)
			{printf("2011 yili MTV tutari: 697.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 348.50 TL");break;}
		}
		
		if(yas>=16)
		{
			if(silindir<=1900)
			{printf("2011 yili MTV tutari: 260.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 130.00 TL");break;}
			if(silindir>=1901)
			{printf("2011 yili MTV tutari: 436.00 TL\nTaksit bedeli (MTV tutarinin yarisi) : 218.00 TL");break;}
		}
		}
	}
return 0;
}
