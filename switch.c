#include <stdio.h>

void playgame()
{ printf( "Play game called" ); }

void loadgame()
{ printf( "Load game called" ); }

void playmultiplayer()
{ printf( "Play multiplayer game called" ); }

int main()
{
	int input;

	printf( "1. Play game\n" );
	printf( "2. Load game\n" );
	printf( "3. Play multiplayer\n" );
	printf( "4. Exit\n" );
	printf( "Selection: " );
	scanf( "%d", &input );
	switch ( input )
		{
		case 1: /* note colon, not semicolon */
			playgame();
			break;
		case 2:
			loadgame();
			break;
		case 3:
			playmultiplayer();
			break;
		case 4:
			printf( "Ending Program...\n" );
			break;
		}
	getchar();
}



