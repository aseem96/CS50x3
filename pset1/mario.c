#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int height;
	do
	{
		printf("Height: ");
		height = GetInt();
	}while(height < 0 || height > 23);
	int i,j,spc;
	int x = height;
	for(i = 0;i < height;i++)
	{
		for(spc = x-1;spc > 0;spc--)
			printf(" ");
		for(j = 0;j < i+2;j++)
			printf("#");
		x--;
		printf("\n");
	}
}
