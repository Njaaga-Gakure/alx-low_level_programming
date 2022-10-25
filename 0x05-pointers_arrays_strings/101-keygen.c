#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - generates a random password
 * Return: Returns a 0 if successful
 */

int main(void)
{	
	char password[10];
	char num[] = "0123456789";
	int num_length = strlen(num);
	char symb[] = "!@#$%^&*()";
	int symbol_length = strlen(symb);
	char lowLetters[] = "abcdefghijklmnopqrstuvwxyz";
	int low_length = strlen(lowLetters);
	char upperLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int upper_length = strlen(upperLetters);
	int i;
 	
	srand(time(NULL));
	for (i = 0; i <= 10; i++)
	{
		int randomchar = rand() % 4;

		if (randomchar == 0)
		{
			password[i] = num[rand() % num_length];
			printf("%c", password[i]);
		}
		else if (randomchar == 1)
		{
			password[i] = symb[rand() % symbol_length];
			printf("%c", password[i]);
		}
		else if (randomchar == 2)
		{
			password[i] = lowLetters[rand() % low_length];
			printf("%c", password[i]);
		}
		else
		{
			password[i] = upperLetters[rand() % upper_length];
			printf("%c", password[i]);
		}
	}
	return (0);
}
