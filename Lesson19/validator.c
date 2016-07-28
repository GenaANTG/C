#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Декларация и инициализация разрешенных на вход флагов
const char * const allowedFlags[] = { "--size", "--sort", "--antg" };
const unsigned int const allowedFlagsLength = sizeof allowedFlags / sizeof allowedFlags[0];

void validateFlags(const char * const flags[], const int const length)
{
	bool flagExists = false;
	int incorrectFlagIndex = -1;

	// Элемент с индексом 0 в массиве флагов - это имя нашей программы,
	// пропускаем его
	for (int i = 1; i < length; i++)
	{
		// Обнуляем состояние флага сигнализирующего
		// присутствие переданного аргумента в массиве разрешенных аргументов
		flagExists = false;

		// Проходим по массиву разрешенных флагов и ищем вхождение аргумента
		for (int j = 0; j < allowedFlagsLength; j++)
		{
			// Проверяем, равны ли строки, если да, то 
			// меняем состоянии на true, и обнуляем флаг incorrectFlagIndex
			if (strcmp(flags[i], allowedFlags[j]) == 0) 
			{
				flagExists = true;
				incorrectFlagIndex = -1;
			}
			else incorrectFlagIndex = i;
		}
		
		// Если состояние flagExists осталось прежним(false) и
		// incorrectFlagIndex не равен -1, то...
		if (!flagExists && incorrectFlagIndex != -1)
		{
			printf("[-] Error: %s incorrect flag was given!\n", flags[incorrectFlagIndex]);
			exit(EXIT_FAILURE);
		}
	}
}

int main(const int const argc, const char * const argv[])
{
	if (argc > 1) validateFlags(argv, argc);

	printf("[+] Congratulations!\n");

	return EXIT_SUCCESS;
}