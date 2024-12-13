#include "main.h"

/**
* _isalpha - Checks for alphabetic character
* @c: The character to check
*
* Description: This function checks if the input character is a letter,
* either lowercase or uppercase. It returns 1 if the character is a letter,
* and 0 otherwise.
*
* Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
