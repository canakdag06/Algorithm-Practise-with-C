#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	printf("Sayýlar ");
	for(int i=1000;i<=9999;i++)
	{
		int binler=i/1000;
		int yuzler=(i%1000)/100;
		int onlar=(i%100)/10;
		int birler=i%10;
		int ustel= (binler*10 + yuzler)+(onlar*10+birler);
		
		if(pow(ustel,2) == i)
			printf("%d ",i);
	}
}
