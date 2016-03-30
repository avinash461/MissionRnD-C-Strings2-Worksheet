/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include <Stdio.h>
char * get_last_word(char * str){
	int len = 0, l_wrd_start = -1, l_wrd_end = 0;
	char *last_wrd;
	last_wrd = (char*)malloc(sizeof(char));
	if (str)
	{
		while (str[len++]);
		//avoiding if spaces found in the last_end of the string
		while (str[len - 1] == ' ')
		{
			len--;
		}
		l_wrd_end = len - 1;
		while (str[len - 1] != ' ' && len >= 1)
		{
			len--;
		}
		l_wrd_start = len;
		//printf("%d %d", l_wrd_start, l_wrd_end);
		int i = 0;
		for (i = 0; l_wrd_start <= l_wrd_end; i++)
		{
			last_wrd[i] = str[l_wrd_start];
			l_wrd_start++;
		}
		last_wrd[i] = '\0';
		//printf("%s", last_wrd);
		return last_wrd;

	}

	return NULL;
}