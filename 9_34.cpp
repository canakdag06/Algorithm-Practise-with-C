#include<stdio.h>
#include<locale.h>
void kuvvet(int,int);

int main()
{
	int taban,us;
	setlocale(LC_ALL, "Turkish");
	printf("Taban ve üs giriniz: ");
	scanf("%d %d",&taban,&us);
	kuvvet(taban,us);
return 0;
}

void kuvvet(int taban, int us)
{
	if(taban == 0 && us == 0)
	{
		printf("Belirsiz");
		return;
	}
	
		int sonuc=1,flag=0;
		if(us<0)
		{
			us = -1*us;
			flag = 1;
		}
		
		for(int i=0;i<us;i++)
		{
			sonuc *= taban;
		}
		
		if(flag == 0)
			printf("Sonuç = %d",sonuc);
		else
			printf("Sonuç = 1/%d",sonuc);
}
