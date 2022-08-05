#include<stdio.h>
#include<locale.h>
#include<iostream>
void cerceveCiz();
using std::cout;


int main()
{	// sorunun ne istediðini anlamadýðým için bunu internetten aldým. kaynak: chip.com.tr
	cerceveCiz();
}

void cerceveCiz()
{
	int i,j;
       const int boy=40;
       cout << (char)218; // cercevenin sol ust kosesi
       
		for(i=0;i<boy;i++)
		{
			for(j=0;j<boy;j++)
			{
				if(i>0 && j>0 && i<boy-1 && j<boy-1) // cercevenin icinin boþ olma ozelligi
					cout << ' ';
				else if(i==0 && j==boy-1) // cercevenin sag ust kosesi
					cout << (char)191;
				else if(i==boy-1 && j==0) // cercevenin sol alt kosesi
					cout << (char)192;
				else if(i==boy-1 && j==boy-1) // cercevenin sag alt kosesi
					cout << (char)217;
				else if(j>0 && j<boy-1)  // cercevenin alt ve ust kenarlari
					cout << '-';
				else if(i>0 && i<boy-1) // cercevenin sol ve sag kenarlari
					cout << '|';
			}
			cout << '\n';
       }
}
