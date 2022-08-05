#include<stdio.h>
char fonk1( int );
int fonk2( int, int );
int main()
{
	int x;
	
	for( x = 4; x != 6; x = (x + 3) % 11 ) {
		printf("%c", fonk1( fonk2 ( x, 6 ) ) );
	}
	return 0;
}

int fonk2( int a, int b )
{
	if ( a > b )
		return b;
	else
		return a;
}

char fonk1( int n )
{
	switch ( n ) {
		case 0 :
			return 'C';
		case 1 :
			return 'O';
		case 2 :
			return 'T';
		case 3 :
			return '?';
		case 4 :
			return 'S';
		case 5 :
			return 'K';
		case 6 :
			return 'A';
		case 7 :
			return '*';
	}
}
