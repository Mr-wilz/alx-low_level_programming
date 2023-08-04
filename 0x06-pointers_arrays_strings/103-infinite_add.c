#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String (Success).
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0;
int val1 = 0, val2 = 0, temp_tot = 0;
int overflow = 0;
int digits = 0;
int len;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;
i--;
j--;

if (j >= size_r - 1 || i >= size_r - 1)
return (0);

while (j >= 0 || i >= 0 || overflow == 1)
{
if (i < 0)
val1 = 0;
else
val1 = n1[i] - '0';

if (j < 0)
val2 = 0;
else
val2 = n2[j] - '0';

temp_tot = val1 + val2 + overflow;
if (temp_tot >= 10)
overflow = 1;
else
overflow = 0;

if (digits >= (size_r - 1))
return (0);

r[digits] = (temp_tot % 10) + '0';
digits++;
j--;
i--;
}

if (digits >= (size_r - 1))
return (0);

r[digits] = '\0';

/* Reversing the string using a simple loop*/
len = strlen(r);
for (i = 0; i < len / 2; i++)
{
char temp = r[i];
r[i] = r[len - i - 1];
r[len - i - 1] = temp;
}
return (r);
}
