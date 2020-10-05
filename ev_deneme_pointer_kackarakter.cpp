#include<stdio.h>
int main()
{
	char word[20];
	char *w1,*w2,*temp;
	printf("Enter a word: \n");
	gets(word);
	int begin_index=2;
	int char_custom=5;
	int j=0;
	temp=word;
	for(int i=begin_index;i<=(char_custom+begin_index-1);i++)
	{
		w2[j]=*temp;
	}
	puts(w2);
	return 0;
}
