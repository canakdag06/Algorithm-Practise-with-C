#include<stdio.h>
#include<locale.h>
void en_buyuk(float,float,float);
void en_kucuk(float,float,float);

int main()
{
	float a,b,c;
	setlocale(LC_ALL, "Turkish");
	printf("3 say� giriniz: ");
	scanf("%f %f %f",&a,&b,&c);
	en_buyuk(a,b,c);
	en_kucuk(a,b,c);
return 0;
}

void en_buyuk(float a,float b,float c)
{
	if(a>b && a>c)
		printf("En b�y�k = %.2f\n",a);
	else if(b>a && b>c)
		printf("En b�y�k = %.2f\n",b);
	else if(c>a && c>b)
		printf("En b�y�k = %.2f\n",c);
	else
		printf("En b�y�k say� yok\n");
}

void en_kucuk(float a,float b,float c)
{
	if(a<b && a<c)
		printf("En k���k = %.2f\n",a);
	else if(b<a && b<c)
		printf("En k���k = %.2f\n",b);
	else if(c<a && c<b)
		printf("En k���k = %.2f\n",c);
	else
		printf("En k���k say� yok\n");
}
