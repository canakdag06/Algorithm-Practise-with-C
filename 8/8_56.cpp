#include<stdio.h>

int main()
{
	
	for(int i=1;i<24;i++)
	{
		for(int j=1;j<60;j++)
		{
			if((i*i+j*j)==(i*100+j))
			{
				
				printf("Aranilan saat= %d:%d",i,j);
			}
		}
	}
return 0;
}
