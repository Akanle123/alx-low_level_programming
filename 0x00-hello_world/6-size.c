#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer files
 * Return 0(Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int e;
float f;
printf("The size of an int is: %lu.\n", (unsigned long)sizeof(b));
printf("The size of a char is: %lu.\n", (unsigned long)sizeof(a));
printf("The size of a long is: %lu.\n", (unsigned long)sizeof(c));
printf("The size of a long long is: %lu.\n", (unsigned long)sizeof(e));
printf("The size of a float is: %lu.\n", (unsigned long)sizeof(f));
return (0);
}
