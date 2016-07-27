#include <stdio.h>

int main() 
{
	//for (variable initialization; condition; variable update) {
	int x;
	/* The loop goes while x < 10, and x increaes by one every loop */
	for ( x = 0; x < 10; x++ ) 
	{
		/* Keep in miend that the loop condition checks the conditional statement before it 		loops again. Consequently, when x equals 10 the loop breaks. x is updated before 			the condition is checked */
		printf( "%d\n", x );
	}
	getchar();
}

