#include <stdio.h>
/**
 * main - program that prints the name of the executable file 
 * @argc: number of command line arguments
 * @argv: This is an array that contains the command line arguments
 * Return: Success 0.
 */
int main(int argc __attribute__((unused)), char* argv[])
{
printf("%s\n", argv[0]);
return(0);
}
