/*#####SAMPLE FILE#############
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int count_string_char (char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}
	
	return i;
}

void reverse_string (char *str)
{
	char l_string[20] = {0};
	int i = 0, count = count_string_char(str);
	printf ("\ncount %d", count);
	
	for (i = 0; i < count; i++)
	{
		l_string[i] = *(str+count-1-i);
	}
	printf ("\nreverse string %s", l_string);
}

void main (void* argc, void* argv[])
{
	char string[] = "This is String";
	
	printf ("\nstring char %d", count_string_char (string));
	
	reverse_string(string);

}