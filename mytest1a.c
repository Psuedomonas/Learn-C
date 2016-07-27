#include <stdio.h>

//declare functions

_Bool A();
_Bool B();
_Bool C();
_Bool D();
_Bool E();

// Main function
_Bool main()
{
	//declare vars
	int input;

	//menu
	printf("So here's your choices\n");
	printf("1. Multiplication program.\n");
	printf("2. You could start program B.\n");
	printf("3. You could start program C.\n");
	printf("4. You could start program D.\n");
	printf("5. You could start program E.\n");
	printf("6. Exit\n");
	scanf("%d", &input);

	switch (input) //menu switch
	{
		case 1:
			return	A();
			break;
		case 2:
			return B();
			break;
		case 3:
			return C();
			break;
		case 4:
			return D();
			break;
		case 5:
			return E();
			break;
		case 6:
			printf("Ending program...\n\n");
			printf("Attempting to end program...\n\n");
			printf("It won't ... it won't end!\n\n");
			printf("Oh... never mind. Bye-bye!\n");
			break;
		default: // Error catch, handles non-handled input
			printf("That is not an option, this will now close.\n");
	}
	getchar(); //waits for user to respond before terminating
}


/*Multiplication function*/
_Bool A() 
{
	// local vars
	int amount = 1, x; /*temporarily set amount to 1 for error catch,
						user may input non-int, should default provide
						false test for error check*/

	printf("Welcome to the multiplication program!\n");
	printf("How many numbers would you like to multiply?:  ");
	scanf("%d", &amount);	//get size of array

	//Correct integer error check, for array size
	if (amount >= 2) 
	{
		int arr[amount]; //build users sized array
		int y = 1;		 //answer

		printf("\nEnter the numbers to multiply: \n");
		
		//builds array, 'shows' calculation, solves
		for (x=0; x < amount; x++)
		{
			scanf("%d", &arr[x]);
			if (x < (amount -1))
				{printf(" x ");}
			else
				{printf(" = ");}
			y = y * arr[x];
		}
		//shows answer
		printf("%d\n", y);
	}
	else
	{
		printf("\nInsuffiecient values for multiplication!\n");
	}

	//After calculation, checks what user wants to do next.
	
	int control; // declares control var
	
	/*May be bad practice to declare vars here, but I like to use stuff
	only when I need it*/	

	printf("\nWould you like to multipy some more numbers?\n");
	printf("1. Yes\n2. No\n");
	scanf("%d", &control);
	printf("\n");
	switch (control)
	{
		case 1:
			return A();
			break;
		case 2:
			printf("Exiting multiplication program\n\n");
			return main();
			break	;
		default:
			printf("Bad input. Program will close\n");
	}
}

_Bool B() {return main();}

_Bool C() {return main();}

_Bool D() {return main();}

_Bool E() {return main();}
		

