#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main(void)
{
	int prices[SIZE] = { 100, 200, 300, 400 };

	bool isTrue = true;
	bool isFalse = false;

	printf("True: %d, False: %d\n", isTrue, isFalse);

	printf("While Loop:\n");

	int i = 0;

	while(i < SIZE)
	{
		printf("%d\n", prices[i]);
		i++;
	}

	printf("For Loop:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", prices[i]);
	}

	printf("Second For Loop:\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\n", prices[i]);
	}

	// do {

	// } while(условие);

	// ...

	return 0;
}