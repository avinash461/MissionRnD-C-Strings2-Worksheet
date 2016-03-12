/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
int get_len(char *temp);
char * get_sub_string(char *str, int i, int j){
	if (str && i <= j && i >= 0){
		int len = get_len(str);
		char *sub_str;
		sub_str = (char *)malloc(sizeof(char)*(j - i));
		int index = 0;
		for (int k = i; k <= j; k++){
				sub_str[index++] = str[k];
			}
			sub_str[index] = NULL;
			return sub_str;
	}
	return NULL;
}
int get_len(char *temp)
{
	int length = 0;
	while (*temp)
	{
		length++;
		temp++;
	}
	return length;

}
