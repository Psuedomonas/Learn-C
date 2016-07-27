#include <stdio.h>

//declare functions

_Bool A();
_Bool B();
_Bool C();
_Bool D();
_Bool E();

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

	switch (input)
	{
		case 1:
			A();
			break;
		case 2:
			B();
			break;
		case 3:
			C();
			break;
		case 4:
			D();
			break;
		case 5:
			E();
			break;
		case 6:
			printf("Ending program...\n");
			printf("Attempting to end program...\n");
			printf("It won't ... it won't end!\n");
			printf("Oh... never mind. Bye-bye!\n");
			break;
			
	}
	getchar();
}

_Bool A()
{
	int amount, x, control;

	printf("Welcome to the multiplication program!\n");
	printf("How many numbers would you like to add?: ");
	scanf("%d", &amount);
	if (amount >= 2)
	{
		int arr[amount];
		int y;

		y = 1;
		printf("\nEnter the numbers to multiply: \n");
		for (x=0; x < amount; x++)
			{
				scanf("%d", &arr[x]);
			}
		for (x=0; x < amount; x++)
			{
				y = y * arr[x];
				printf("%d", arr[x]);
				if (x < (amount -1))
					{printf(" x ");}
				else
					{printf(" = ");}
			}
		printf("%d\n", y);
	}
	else
		{
			printf("Insuffiecient values for multiplication!\n");
		}

	
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
	}
}

_Bool B() {}

_Bool C() {}

_Bool D() {}

_Bool E() {}
		

