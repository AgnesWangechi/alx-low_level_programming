#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplicaation of the command line arguments
 * @argc: number of command line arguments
 * @argv: an array that holds the command line arguments
 * Return: success 0.
 */
int main(int argc, char* argv[])
{
int i, mult;
if (argc > 1)
{
for(i = 1; i < argc; i++)
{
mult = atoi(argv[i]) * atoi(argv[(i + 1)]);
printf("%d\n", mult);
}
}
else
{
printf("Error\n");
}
return 0;
}
