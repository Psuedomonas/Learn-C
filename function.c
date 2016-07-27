#include <stdio.h>

//#include <stdlib.h>
//int a = rand(); /* rand is a standard function all compilers have */
//This isn't used here, just some sort of example. Code must be missing to make it work

//return-type function_name ( arg_type arg1, ... arg_type arg N );

int mult (int x, int y);

int main()
{
	int x;
	int y;

	printf( "Please input two numbers to be multiplied: " );
	scanf( "%d", &x );
	scanf( "%d", &y );
	printf( "The product of your two numbers is %d\n", mult( x,y ) );
	getchar();
}

int mult (int x, int y)
{
	return x * y;
}
