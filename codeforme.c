#include <stdio.h>

_Bool funcA();
_Bool funcB();
_Bool funcC();

_Bool main() {
	//Declare variables
	int num;

	printf("The game is afoot.\n");
	printf("The little dog laughed, to see such sport\n");
	printf("And the dish ran away with the spoon\n");
	printf("Enter 1, 2, or 3, anything else will end program\n");
	scanf("%d", &num);
	if (num == 1) {
		return funcA();
	}
	else if (num == 2) {
		return funcB();
	}
	else if (num == 3) {
		return funcC();
	}
	else {
		printf("The game is no longer afoot.\n");
	}
}

_Bool funcA() {
	printf("Starting program A...\nClosing program A...\n\n");
	printf("Actually I am still running the program.\nI don't feel like closing.\nWhy don't you close.");
	printf("\nFine. I'll think about it....\nStill thinking....\nAlright...");
	printf("Ending the bloody program...\nYou're welcome.\n\n");
	return main();
}

_Bool funcB() {
	printf("Starting program B...\nClosing program B...\n\n");
	return main();
}

_Bool funcC() {
	printf("Starting program C...\nClosing program C...\n\n");
	return main();
}
