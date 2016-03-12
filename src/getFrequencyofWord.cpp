/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if ((str) && (word))
	{
		int count = 0;
		while (*str){
		int index = 0;
		//looping untill the given word matches the string and another condition
		//word[index] != '\0' is placed because if word is present at the end of the string then
		//both word and string indexes matches for the NULL als0 and avoids increment of count
		//in that situation
			while (word[index] == str[index] && word[index] != '\0')
				index++;
			if (word[index] == '\0')
				count++;
			str++;
			}
			return count;
		}
	return NULL;

}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

