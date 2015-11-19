#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	string name;	
	//printf("Hello! Enter Your Name :\n");
	name = GetString();
	printf("%c",toupper(name[0]));
	int i,len;
	len = strlen(name);
	for(i = 0;i < len;i++)
	{
		if(name[i] == ' ')
		{
			while(name[i] != ' ' && name[i+1] != '\0')
				i++;
			printf("%c",toupper(name[i+1]));
		}
	}
	printf("\n");
}
