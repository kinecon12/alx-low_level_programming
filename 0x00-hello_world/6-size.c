#include<stdio.h>
/**
 * main - Entry point a program that print all the datatype file size
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of Long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Sixe of Long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu blyte(s)\n", (unsigned long)sizeof(f));
return (0);
}

