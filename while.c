#include <stdio.h>

int main () { //I wonder if all c programs require a primary function

	int x = 0; // var dec

	while ( x < 10 ) { // While x is less than 10
		printf( "%d\n", x );
		x++; // update x so condition can be met eventually
	}
	getchar();
}

