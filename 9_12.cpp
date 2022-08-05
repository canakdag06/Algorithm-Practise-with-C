#include<stdio.h>
void asalyaz(int,int);

int main()
{
	int bas=7,son=21;
	asalyaz(2,10);
	asalyaz(bas,son);
return 0;
}

void asalyaz(int bas,int son)
{
	for(int i=bas;i<=son;i++)
	{
		int flag = 0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j == 0)
				flag = 1;
		}
		if(flag == 0)
		printf("%d ",i);
	}
	printf("\n");
}
