#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int length);

int main(void)
{
	int height = get_int("Height: ");
	for(int i = 0; i < height; i++)
	{
		print_row(height-i, i+1);
		printf("\n");
	}
}

void print_row(int spaces, int hashtags)
{
	for(int j = 0; j < spaces; j++)
	{
		printf(" ");
	}
	for(int k = 0; k < hashtags; k++)
	{
		printf("#");
	}
}
