#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi=2147483647,min_1,min_2,i;
	min_1=sayi;
	
	for(i=1;i<=10;i++)
    {
	printf("%d. say�=",i);
    scanf("%d",&sayi);
		       
		if(sayi<min_1)
		{
		min_2=min_1;
		min_1=sayi;
		}
		else if(sayi>min_2)
		min_2=sayi;
    }
		printf("------------------\n");
    	printf("En k���k say� : %d \n",min_1);
    	printf("En k���k 2. say� :%d",min_2);
}
