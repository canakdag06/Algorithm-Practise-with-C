#include<stdio.h>

int main()
{
	int i,j,k;
	k = 4;
	for(i=1;i<7;i++)
	{
		if(k>=100) k = k/3;
		else k = 2*k;
		j=k;
		while(j%5 > 0) j++;
		printf("%5d\n",j);
	}
return 0;
}
