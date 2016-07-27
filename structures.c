#include <stdio.h>
/* structures look like premature objects */
struct database
{
	int id_number;
	int age;
	float salary;
};

_Bool main()
{
	struct database employee; /*there is now an employee 			variable tha has modifiable variables inside it*/
	employee.age = 22;
	employee.id_number 1;
	employee.salary = 12000.21;
}
