#include<stdio.h>
#include<math.h>
int main()
{
	
	for(int i=10;i<100;i++)
	{
		int i_birler = i%10;
		int i_onlar = i/10;
		if(i_birler==i_onlar)
			{
			continue;
			}
		
		for(int j=10;j<100;j++)
		{
			if(i==j)
			{
				continue;
			}
			int j_birler = j%10;
			int j_onlar = j/10;
			float deger = (float)(i)/(float)(j);
			if(j_birler == j_onlar)
				{
				continue;
				}
			
			if(i_birler == j_birler)
			{
				int i_yeni = i_onlar;
				int j_yeni = j_onlar;
				float deger_yeni = (float)(i_yeni)/(float)(j_yeni);
					if(deger == deger_yeni)
					{
						printf("%d / %d = %d / %d\n",i,j,i_yeni,j_yeni);
						printf("Deger= %.2f\n",deger);
					}
			}
			else if(i_birler == j_onlar)
			{
				int i_yeni = i_onlar;
				int j_yeni = j_birler;
				float deger_yeni = (float)(i_yeni)/(float)(j_yeni);
				if(deger == deger_yeni)
					{
						printf("%d / %d = %d / %d\n",i,j,i_yeni,j_yeni);
						printf("Deger= %.2f\n",deger);
					}
			}
			else if(i_onlar == j_birler)
			{
				int i_yeni = i_birler;
				int j_yeni = j_onlar;
				float deger_yeni = (float)(i_yeni)/(float)(j_yeni);
				if(deger == deger_yeni)
					{
						printf("%d / %d = %d / %d\n",i,j,i_yeni,j_yeni);
						printf("Deger= %.2f\n",deger);
					}
			}
			else if(i_onlar == j_onlar)
			{
				int i_yeni = i_birler;
				int j_yeni = j_birler;
				float deger_yeni = (float)(i_yeni)/(float)(j_yeni);
				if(deger == deger_yeni)
					{
						printf("%d / %d = %d / %d\n",i,j,i_yeni,j_yeni);
						printf("Deger= %.2f\n",deger);
					}
			}
		}
	}

return 0;
}
