#include <stdio.h>

int main(void)
{
	const char * const strings1[] = { "1", "22", "333" };
	const char * const strings2[] = { "1", "22", "333", "44444444444444444444444444444444444444444444444444444444444444444444444444" };

	// Сколько байт занимает весь массив?
	printf("strings1 memory size: %zu bytes\n", sizeof strings1);
	printf("strings2 memory size: %zu bytes\n", sizeof strings2);

	// Сколько байт выделено на одну строку?
	// Вычислим занимаемый размер 4ой строкой в strings2
	printf("%zu bytes per string in strings1\n", sizeof strings1[0]);
	printf("%zu bytes per string in strings2\n", sizeof strings2[3]);

	return 0;
}