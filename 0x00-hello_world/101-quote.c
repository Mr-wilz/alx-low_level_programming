#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 (Success)
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message);
}
