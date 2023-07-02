#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0,max_1,max_2,i;
	max_1=sayi;
	
	for(i=1;i<=10;i++)
    {
        printf("%d. sayý=",i);
        scanf("%d",&sayi);
        
		if(sayi>max_1)
        {
            max_2=max_1;
            max_1=sayi;
        }
        else if(sayi>max_2)
		    max_2=sayi;
    }
		printf("------------------\n");
    	printf("En büyük sayý : %d \n",max_1);
    	printf("En büyük 2. sayý :%d",max_2);
}
