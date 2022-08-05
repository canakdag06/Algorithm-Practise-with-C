#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int lambalar[50];
	
	for(int i=0; i<50; i++)
	{
		lambalar[i] = 0;
	}
	
	
	for(int i=1; i<=10 ; i++)
	{
		for(int j=1; j<=50 ; j++)
		{
			if(j%i == 0 && lambalar[j-1]==0)
				lambalar[j-1] = 1;
			else if(j%i == 0 && lambalar[j-1] == 1)
				lambalar[j-1] = 0;
		}
	}
	
	printf("Yanýk lambalar\n");
	for(int i=0; i<50; i++)
	{
		if(lambalar[i] == 1)
			printf("%d, ", i+1);
	}
	printf("\nSönük lambalar\n");
	for(int i=0; i<50; i++)
	{
		if(lambalar[i] == 0)
			printf("%d, ", i+1);
	}
	return 0;
}
