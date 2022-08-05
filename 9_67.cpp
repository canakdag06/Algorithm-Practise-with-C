#include<stdio.h>
#include<locale.h>
int dikucgen(int,int,int);

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a,b,hipo;
	printf("Üç adet kenar uzunluðu giriniz (Sonuncu hipotenüs olmalý) : ");
	scanf("%d %d %d",&a,&b,&hipo);
	printf("%d",dikucgen(a,b,hipo));
return 0;
}

int dikucgen(int a,int b,int hipo)
{
	if(hipo*hipo == a*a + b*b)
		return 1;
	else
		return 0;
}
