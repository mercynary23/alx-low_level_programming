#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char arr[] = "_putchar";
	int i = 0;

	while (arr[i] != '\0')
	{
		_putchar(arr[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
