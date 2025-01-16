#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the corresponding function, or NULL if invalid.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (*s == *(ops[i].op) && s[1] == '\0') /* Ensure exact operator match */
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
