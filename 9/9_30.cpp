#include<stdio.h>
#include<locale.h>
int asaliBul(int,char);
int main()
{
	printf("\n%d",asaliBul(15, 'b'));
	printf("\n%d",asaliBul(12, 'k'));
return 0;
}

int asaliBul(int sayi, char yon)
{
	if(yon == 'b')
	{
		while(1)
		{
			sayi++;
			int flag=0;
				for(int i=2;i<=sayi/2;i++)
				{
					if(sayi%i == 0)
						flag = 1;
				}
			if(flag == 0)
			{
				return sayi;
				break;
			}
		}
	}
	else if(yon == 'k')
	{
		while(1)
		{
			sayi--;
			int flag=0;
				for(int i=2;i<=sayi/2;i++)
				{
					if(sayi%i == 0)
						flag = 1;
				}
			if(flag == 0)
			{
				return sayi;
				break;
			}
		}
	}
}
