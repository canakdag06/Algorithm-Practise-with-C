#include<stdio.h>

int siralimi(int[], int);

int main()
{
	int arr1[5] = {1,8,2,5,3};
	int arr2[5] = {1,2,3,4,5};
	printf("%d ",siralimi(arr1,5));
	printf("%d ",siralimi(arr2,5));
	
	return 0;
}

int siralimi(int dizi[], int boyut)
{
    for(int i=0; i<(boyut-1); i++)
	{
		int gecis=1;
    	for(int j=0; j<boyut-i-1; j++)
		{
            if (dizi[j] > dizi[j+1])
                return 0;
		}
			return 1;
	}	
}
