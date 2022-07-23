#include <stdio.h>
/**
 * main - program that prints the command line arguments line by line
 * @argc: number of command line arguments
 * @argv: an array the holds the commant line arguments
 * Return: success 0
 */
int main(int argc, char* argv[])
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
