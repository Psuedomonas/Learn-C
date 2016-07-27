#include <stdio.h>
/* structures look like premature objects */
struct xampl
{
	int x
};

_Bool main()
{
	struct xampl structure;
	struct xampl *ptr;

	structure.x = 12;
	ptr = &structure; /* &(address) needed with structures 							with pointers*/
	printf("%d", ptr->x); /*the -> acts somewhat like the * 	when it is used with pointers. It says, get whatever is 	at that memory address; NOT get what that memory 			address is.*/
	getchar();
}
