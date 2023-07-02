#include<stdio.h>
#include<locale.h>
void ortancaBul(int,int,int);

int main()
{
	int a,b,c;
	setlocale(LC_ALL, "Turkish");
	printf("3 sayý giriniz: ");
	scanf("%d %d %d",&a,&b,&c);
	ortancaBul(a,b,c);
return 0;
}

void ortancaBul(int a,int b,int c)
{
	if((a>b && a<c) || (a>c && a<b))
		printf("Ortanca sayý: %d",a);
    else if((b>a && b<c) || (b>c && b<a))
		printf("Ortanca sayý: %d",b);
    else
		printf("Ortanca sayý: %d",c);
}
