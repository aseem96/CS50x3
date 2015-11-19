#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
	int c,q,d,n,p,q_c,d_c,n_c;
	float change;
	int total,left;
	do
	{
		printf("Oh hai! How much change is owed?\n");
		change = GetFloat();
	}while(change < 0);
	c = roundf((change * 100));
	// Quarters
	q_c = c/25;
	left = c % 25;
	// Dimes
	d_c = left / 10;
	left = left % 10;
	// Nickels
	n_c = left / 5;
	left = left % 5;
	total = q_c + d_c + n_c + left;
	printf("%d\n", total);
}
	
	
	
