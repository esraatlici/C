#include<stdio.h>
int main()
{
	char string[30];
	printf("Enter a string \n");
	gets(string);
	char *begin, *end,temp;
	begin=string;
	end=string;
	while(*end)
	{
		end++;
	}
	end--;
	while(begin<end)
	{
		temp=*end;
		*end=*begin;
		*begin=temp;
		begin++;
		end--;
	}
	puts(string);
	return 0;
}
