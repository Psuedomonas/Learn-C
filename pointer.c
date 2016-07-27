#include <stdio.h>
#include <stdlib.h>

//pointers tutorial program

_Bool main()
{
	// dec var
	int x;
	// dec pointer
	int *p;
	
	p = %x;
	scanf( "%d", &x );
	printf( "%d\n", *p ); /* Note the use of the * to get the value */
	getchar();
}

_Bool other() 
{
	float ptr* = malloc(sizeof(*ptr));
}
_Bool third()
{
	float *ptr;
	/*hundreds of lines of code*/
	ptr = malloc(sizeof(*ptr)); /*allocates space (even 					though it has been declared previously*/
	
	free(ptr); //liberates the allocated space
}

