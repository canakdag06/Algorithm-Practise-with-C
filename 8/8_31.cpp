#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi=0,max_1,max_2,i;
	max_1=sayi;
	
	for(i=1;i<=10;i++)
    {
        printf("%d. say�=",i);
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
    	printf("En b�y�k say� : %d \n",max_1);
    	printf("En b�y�k 2. say� :%d",max_2);
}
