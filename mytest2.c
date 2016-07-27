#include <stdio.h>
//version 0.2
//Programmed by Nicholas Zehm 

/*My test 2 program, strings, (arrays?, structures,)
pointers, file i/o */

// alg

// main - chose poem
// poem - poem or open?
	//open poem
	//edit poem
	//exit
// edit poem
	//new ->edit poem
	//open 
	//save
		// save new
		// save as
	//exit

// declare functions
_Bool poem();		//Not doing this here seems to cause
_Bool openPoem();	//type errors from 'implicit' typing
_Bool editPoem();	//it may have been reading the local
_Bool savePoem();	//int and assuming that was the return type
					//OR strict is on ...?


_Bool main() { //main function
	int x=0; //switch control
	printf("Do you want to: \n1. Start Poem program\n(Enter anything else to exit)\n");
	scanf("%d", &x);
	switch(x) {
		case 1: return poem(); break;
		default: printf("Ending program...\n"); break;
	}
}

// Poem functions

_Bool poem() {// Poem control menu
	int x=0; //switch control
	printf("Do you want to: \n1. Create a new poem\n2. Open a prexisting poem\n3. Exit\n");
	scanf("%d", &x);
	switch (x) {
		case 1: return editPoem(); break;
		case 2: return openPoem(); break;
		default: printf("Returning to main menu...\n");
			return main(); break;
	}
}

_Bool openPoem() { //opens file
	printf("Open file\n");
	/*some code*/

	return editPoem();
}

_Bool savePoem() { //saves file
	printf("Save file\n");
	/* if file exists, overwrite?*/

	return editPoem();
}

_Bool editPoem() {
	int x=0; //switch control
	//fills string
	printf("Edit text\n");
	
	//file editing stuff

	//hit enter, next line of code run
	printf("Do you want to: \n1. New poem\n2. Open poem\n3. Save poem\n4. Exit\n");
	scanf("%d", &x);
	switch (x) {
		case 1: return editPoem(); break;
		case 2: return openPoem(); break;
		case 3: return savePoem(); break;
		default: printf("Returning to main menu...\n");
			return poem(); break;
	}
}

/* Other notes: cascading crash when a non-integer is fed into scanf("%d"); 
causes program to exit, no matter what. 
May need to look into better functions.
Perhaps I should build my own integer check library and grab functions from it.
Would be good experience. */

