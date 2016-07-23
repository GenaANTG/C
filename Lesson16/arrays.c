#include <stdio.h>

#define SIZE 4

void showArrayAdressess(float array[])
{
	printf("[*] Array Adressess:\n");
	printf("====================\n");

	printf("0: %p\n", &array[0]);
	printf("1: %p\n", &array[1]);
	printf("2: %p\n", &array[2]);
	printf("3: %p\n", &array[3]);

	printf("\n");
	return;
}

void showArrayAdressessByPointer(float * array)
{
	printf("[*] Array Adressess By Pointer:\n");
	printf("===============================\n");

	printf("0: %p\n", &array[0]);
	printf("1: %p\n", &array[1]);
	printf("2: %p\n", &array[2]);
	printf("3: %p\n", &array[3]);

	printf("\n");
	return;
}

int main(void)
{
	printf("=============================\n");
	printf("[*] C Language Programming\n");
	printf("[*] Lesson 16. Arrays. Part 2\n");
	printf("=============================\n\n");

	float prices[SIZE] = { 1000.0, 2000.0, 3000.0, 4000.0 };

	printf("[*] Index Access:\n");
	printf("=================\n");

	printf("0: %.2f\n", prices[0]);
	printf("1: %.2f\n", prices[1]);
	printf("2: %.2f\n", prices[2]);
	printf("3: %.2f\n", prices[3]);

	printf("\n[*] Pointer Access:\n");
	printf("===================\n");

	printf("0: %.2f\n", *prices);
	printf("0: %.2f\n", *(prices + 0));
	printf("1: %.2f\n", *(prices + 1));
	printf("2: %.2f\n", *(prices + 2));
	printf("3: %.2f\n", *(prices + 3));

	size_t floatSize = sizeof(float);
	size_t intSize = sizeof(int);
	size_t charSize = sizeof(char);

	printf("\n[*] Sizes:\n");
	printf("==========\n");

	printf("Float Size: %zu bytes.\n", floatSize);
	printf("Int Size: %zu bytes.\n", intSize);
	printf("Char Size: %zu bytes.\n", charSize);

	printf("\nPrices array size: %zu bytes.\n\n", sizeof prices);

	showArrayAdressess(prices);
	showArrayAdressessByPointer(prices);

	printf("[*] Created by Gena ANTG. Good Luck!\n");

	return 0;
}