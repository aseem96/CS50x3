#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[])
{
	string org;
	int i,j = 0;
	string k;
	char c;
	if(argc != 2)
	{
		printf("Invalid Arguments!!\n");
		return 1;
	}
	else
	{
		k = argv[1];
		int count = 0;
		int klen = strlen(k);
		for (i = 0; i < klen; i++)
		{
			k[i] = tolower(k[i]);
		}
		for(i = 0;i < klen;i++)
		{
			if(isalpha(k[i]))
				count++;
		}
		if(count != klen)
		{
			printf("Only Alphabets allowed as key!!\n");
			return 1;
		}
		//printf("Enter text :\n");
		org = GetString();
		int len = strlen(org);
		for(i = 0;i < len;i++)
		{
			if(isalpha(org[i]))
			{						
				if(islower(org[i]))
					printf("%c",((((org[i] - 97)+(k[j]-97))%26)+97));
				else
					printf("%c",((((org[i] - 65)+(k[j]-97))%26)+65));
				j = (j+1)%klen;
			}
			else
				printf("%c",org[i]);
		}
		printf("\n");
		return 0;
	}
}
