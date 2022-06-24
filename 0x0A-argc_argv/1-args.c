#include <stdio.h>
#include "main.h"

/**
  * -main prints the number of arguments 
  * @argc number of argument
  * @argv array of argument
  * Return: Always 0 (Success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc);
	return (0);
}
