#include "main.h"

/**
* _islower - Checks for a lowercase character
* @c: The character to check
*
* Description: This function returns 1 if the character is a lowercase letter,
* otherwise it returns 0.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
