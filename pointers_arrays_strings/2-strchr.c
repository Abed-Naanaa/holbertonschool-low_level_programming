#include "main.h"
#include <stddef.h> /* For NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') /* Traverse the string */
    {
        if (*s == c) /* Check for the character */
        {
            return (s); /* Return pointer to the match */
        }
        s++;
    }

    if (c == '\0') /* Check if c is the null terminator */
    {
        return (s);
    }

    return (NULL); /* Return NULL if no match is found */
}
