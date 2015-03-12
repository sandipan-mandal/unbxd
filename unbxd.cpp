#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	FILE *words;
	char word[50];
	char ans[60];
	
	words=fopen("words.txt","r");
	while(!feof(words))
	{
		fscanf(words,"%s",word);
		printf("%s\n",word);
	}
	return 0;
}