#include "main.h"
#include <ctype.h>

/**
 * cap_string - ...
 * @str: ...
 * Return: ...
 */

char *cap_string(char *str)
{
	int i = 0;
	
	/* // capitalize the first letter of the string*/
	str[0] = toupper(str[0]);
	
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' || 
            str[i] == '(' || str[i] == ')' || str[i] == '{' || 
            str[i] == '}')
        {
           while (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\n' ||
                   str[i+1] == ',' || str[i+1] == ';' || str[i+1] == '.' || 
                   str[i+1] == '!' || str[i+1] == '?' || str[i+1] == '"' || 
                   str[i+1] == '(' || str[i+1] == ')' || str[i+1] == '{' || 
                   str[i+1] == '}')
            {
                i++;
            }

           
            if (str[i+1] != '\0')
            {
                str[i+1] = toupper(str[i+1]);
            }
        }
        i++;
    }

    return str;
}

