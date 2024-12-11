#include<stdio.h>
/**
 * main method - listing the alphabet excluding q and e
 *
 **/

int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{

if (ch != 'e' && ch != 'q')
{
putchar (ch);
}

}

putchar('\n');
return (0);

}
