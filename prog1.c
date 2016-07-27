#include <stdio.h>
//Nicholas Zehm
//Statemachine game

/*alg

*/

//declare functions
//int open();
int save(int n);
_Bool room11();
_Bool room12();
_Bool room21();
_Bool room22();


//Program
_Bool main() { //Main program
	printf("Welcome to Dungeons of C\nMove:\n");
	printf("1. North\n2. East\n3. West\n4. South\n5. Save game\n6. Exit game\n");
	return room11(); //Starts in room 11
}

//Functions
/*int open(int n) {
	printf("Open saved game");
	switch(n) { //return to sender
		case 1: return main(); break;
		case 2: return room21(); break;
		case 3: return room12(); break;
		case 4: return room22(); break;
}*/

int save(int n) {
	printf("Save game");
	switch(n) { //return to sender
		case 1: return main(); break;
		case 2: return room21(); break;
		case 3: return room12(); break;
		case 4: return room22(); break;
	}
}

_Bool room11() {
	printf("x1,y1");
	int i = 0, c = 0;
	while (c == 0) {
		scanf("%d", &i);
		switch(i) {
			case 1: //north
				printf("The way is blocked.\n"); 
				break; 
			case 2: //east
				printf("Moving east...\n"); 
				return room21(); break;						
			case 3: //west
				printf("The way is blocked.\n");
				break;	
			case 4: //south
				printf("Moving south...\n"); 
				return room12(); break;						
			case 5:	//save
				return save(1); break;			 					
			default: //exit
				c = 1;
				printf("Ending Program...\n"); 
				break;	
		}
	}
}

_Bool room21() {	
	printf("x2,y1");
	int i = 0, c = 0;
	while (c == 0) {
		scanf("%d", &i);
		switch(i) {
			case 1: //North
				printf("The way is blocked.\n"); 
				return room21(); break; 
			case 2: //east
				printf("The way is blocked.\n"); 
				return room21(); break;	
			case 3: //west
				printf("Moving west...\n"); 
				return room11(); break;					
			case 4: //south
				printf("Moving south...\n");
				return room22(); break;						
			case 5:	//save
				return save(2); break;			 					
			default: //Exit
				printf("Ending program...\n");
				break;	
		}
	}
}

_Bool room12() {
	printf("x1,y2");
	int i = 0, c = 0;
	while (c == 0) {
		scanf("%d", &i);
		switch(i) {
			case 1: //North
				printf("Moving north...\n"); 
				return room11(); break; 
			case 2: //east
				printf("Moving east...\n");
				return room22(); break;						
			case 3: //west
				printf("The way is blocked.\n"); 
				return room12(); break;	
			case 4: //south
				printf("The way is blocked.\n"); 
				return room12(); break;						
			case 5:	//save
				return save(3); break;			 					
			default: //Exit
				printf("Ending program...\n"); 
				break;	
		}
	}
}

_Bool room22() {
	printf("x2,y2\n");
	int i = 0, c = 0;
	while (c == 0) {
		scanf("%d", &i);
		switch(i) {
			case 1: //North
				printf("Moving north...\n"); 
				return room21(); break; 						
			case 2: //east
				printf("The way is blocked.\n"); 
				return room22(); break;						
			case 3: //west
				printf("Moving west...\n"); 
				return room12(); break;	
			case 4: //south
				printf("The way is blocked.\n"); 
				return room22(); break;	
			case 5:	//save
				return save(4); break;			 					
			default: //Exit
				printf("Ending program...\n"); 
				break;	
		}
	}
}
