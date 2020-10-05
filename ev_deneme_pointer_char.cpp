#include<stdio.h>
int main()
{
	char word[20],*p;
	printf("Enter a word: \n");
	gets(word);
	p=word;
	while(*p)
	{
		printf("%c",*p++);
	}
}
