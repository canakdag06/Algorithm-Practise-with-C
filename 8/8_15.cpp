#include<stdio.h>
#include<locale.h>

int main()
{
	int i, j, flag;
	setlocale(LC_ALL, "Turkish");
	printf("1 ile 20 arasýndaki asal sayýlar");
	printf("\n-------------------------------\n");
	
	for(i=2;i<=20;i++)
	{
		flag = 1;
		for(j=2;j<=i-1;j++)  //asal sayýlar 1'e bölündüðü için 2'den baþlattýk, kendisine bölündüðün için i-1'de bitirdik.
		{
			if(i%j==0)
			{
			flag = 0;
			break;
			}
		}
		if(flag == 1)
		printf("%d ",i);
	}
return 0;
}
