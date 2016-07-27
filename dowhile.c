#include <stdio.h>

/* While .. Do tutorial from cprogramming.com
originally from Alex Allain
learned by Nicholas Zehm */

/* do {
} while ( condition ); */

int main() {
	int x;

	x = 0;
	do {
		/* Hello world!" is printed at least one time even though the condition is false */
		printf( "Hello World!\n" );
	} while (x != 0 );
	getchar();
}
