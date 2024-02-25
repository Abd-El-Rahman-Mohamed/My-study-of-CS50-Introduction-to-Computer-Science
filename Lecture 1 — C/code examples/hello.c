// Make sure to include the library of `cs50.h` when running this code
# include <cs50.h>
# include <stdio.h>

int main(void)
{
	string name = get_string("What's your name?");
	printf("Hello %s\n", name);
}
