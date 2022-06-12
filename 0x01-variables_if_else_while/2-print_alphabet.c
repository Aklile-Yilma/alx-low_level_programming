#include <stdio.h>
#include <stdlib.h>

/*
 * main- Entry point
 * Return: Always 0(Success)
 * */

int main(void)
{
	char alpha = 'a';

<<<<<<< HEAD
	while (alpha <= 'z')
=======
int main(void){
	char i = 'a';
	for(i; i <= 'z'; i++)
>>>>>>> 53776c712f9b129d5d7af44962ff8fa44e994ade
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
