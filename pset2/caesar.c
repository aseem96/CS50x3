#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[])
{
	string org;
	int k,i;
	char c;
	if(argc != 2)
	{
		printf("Invalid Arguments!!\n");
		return 1;
	}
	else
	{
		k = atoi(argv[1]);		
		//printf("Enter text :\n");
		org = GetString();
		int len = strlen(org);
		for(i = 0;i < len;i++)
		{
			if(isalpha(org[i]))
			{						
				if(islower(org[i]))
					printf("%c",((((org[i] - 97)+k)%26)+97));
				else
					printf("%c",((((org[i] - 65)+k)%26)+65));
			}
			else
				printf("%c",org[i]);
		}
		printf("\n");
		return 0;
	}
}
