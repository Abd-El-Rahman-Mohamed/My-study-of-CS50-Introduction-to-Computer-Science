// Make sure to include the library of `cs50.h` when running this code
#include <cs50.h>
#include <stdio.h>

int main(void) 
{
	char C = get_char("Do you agree? ");

	if (C == 'y' || C == 'Y')
	{
		printf("Agreed.\n");
	}
	else if (C == 'n' || C == 'N')
	{
		printf("Not agreed.\n");
	}
}
