#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	
	char tahta[8][8];
	int x,y;
	for(int i=0; i<9; i++)
	{
		do
		{
			x = rand()%8;
			y = rand()%8;
		} while(tahta[x][y] == '*');
		tahta[x][y] = '*';
	}
	printf("  0 1 2 3 4 5 6 7\n");
	for(int i=0; i<8; i++)
	{
		printf("%d ",i);
		for(int j=0; j<8; j++)
		{
			if(tahta[i][j] == '*')
				printf("%c ",tahta[i][j]);
			else
				printf("- ");
		}
		printf("\n");
	}
	return 0;
}
