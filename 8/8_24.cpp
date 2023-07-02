#include<stdio.h>
#include<math.h>
int main()
{
	int i,binler,yuzler,onlar,birler,a,b,c,d;
	for(i=1000;i<=9999;i++)
	{
		binler=i/1000;
		yuzler=(i%1000)/100;
		onlar= (i%100)/10;
		birler= i%10;
		
		if(i == pow(binler,binler)+pow(yuzler,yuzler)+pow(onlar,onlar)+pow(birler,birler))
		{
			printf("%d%d%d%d",binler,yuzler,onlar,birler);
		return 0;
		}
	}
}
