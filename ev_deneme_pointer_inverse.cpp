#include<stdio.h>
int main()
{
	char word[20],word1[20];
	char *w1,*w2,temp;
	printf("Enter a word:\n");
	gets(word);
	w1=word;
	word1[20]=word[20];
	w2=word1;
	while(*w2) *w2++;
	//*w2--;
	while(*w1)
	{
		temp=*w1;
		*w2=temp;
		w1++;
		w2--;
	}
	puts(word1);
	return 0;
}
