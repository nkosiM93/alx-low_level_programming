#include "main.h"

char *_strstr(char *haystack, char *needle){
        int g ,l, z, c;
        char *point;
         g = 0;
         l = 0;
         point = NULL;

         /*count the number of characters in the strings*/
         while (haystack[g] != '\0')
                 g++;

         while (needle[l] != '\0')
                 l++;
         z = 0;
         for (c = 0; haystack[c] != '\0'; c++)
                 if (g < l)
                         break;
                 else
                 {
                         if (haystack[c] == needle[z])
                         {
                                 g--; /*decrease the number of characters left to compare*/
                                 z++;

                                 if (z >= l)
                                 {
                                         point = haystack + (c - z + 1); /* point where the first character is found*/
                                         return (point);
                                 }
                         }
                         else
                         {
                                 z = 0; /*reset the second string counter*/
                         }
                 }
         return (point);
}
