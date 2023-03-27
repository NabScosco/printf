#include "main.h"
/**
*_putchar - fun that prints a char
*@sp_ch: character we want to print on terminal
*Return: -1 if there is error, 1 otherwise
*/
int _putchar(char sp_ch)
{
	return (write(1, &c, 1)); /* 1 for write on the stander output */
}

