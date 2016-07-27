#include <stdio.h>
//example code, won't work obviously

	while(true) 
	{
	if (won() || quit() == TRUE)
		{break;}
	take_turn(player1);
	if (won() || quit() == TRUE)
		{break;}
	take_turn(player2);

	for (player = 1; won == FALSE; player++)
		{
		if (player > total_num_of_players)
			{player = 1;}
		if (is_bankrupt(player))
			{continue;}
		take_turn(player);
		}
