#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: Pointer to the newly allocated space in memory containing
 * s1 followed by the first n bytes of s2, and null-terminated.
 * If malloc fails, returns NULL. If NULL is passed for s1 or s2,
 * treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate lengths of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Use the entire string s2 if n >= len2 */
if (n >= len2)
n = len2;

/* Allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

/* Copy s1 to concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy n bytes of s2 to concat */
for (j = 0; j < n; j++)
concat[i + j] = s2[j];

/* Null-terminate the concatenated string */
concat[i + j] = '\0';

return (concat);
}
