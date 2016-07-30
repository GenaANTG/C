#include <stdio.h>

#define LENGTH 20

int main(void)
{
	const char * const strings1[] = { "1", "22" };
	const char * const strings2[] = { "1", "22", "333" }; 
	const char   const strings3[][LENGTH] = { "1", "22", "333", "4444" };

	// Сколько байт занимает весь массив?
	printf("strings1 memory size: %zu bytes\n", sizeof strings1); // массив указателей / динамический массив
	printf("strings2 memory size: %zu bytes\n", sizeof strings2); // массив указателей / динамический массив
	printf("strings3 memory size: %zu bytes\n", sizeof strings3); // статический массив

	printf("\n");

	// Сколько байт выделено на одну строку?
	printf("%zu bytes per string in strings1\n", sizeof strings1[0]); // вернет размер указателя на строку (char*)
	printf("%zu bytes per string in strings2\n", sizeof strings2[0]); // вернет размер указателя на строку (char*)
	printf("%zu bytes per string in strings3\n", sizeof strings3[0]); // вернет размер в байтах для строки

	printf("\n");

	// Сколько байт выделено на одну строку в strings3?
	printf("%zu bytes per string[0] in strings3\n", sizeof strings3[0]);
	printf("%zu bytes per string[1] in strings3\n", sizeof strings3[1]);
	printf("%zu bytes per string[2] in strings3\n", sizeof strings3[2]);
	printf("%zu bytes per string[3] in strings3\n", sizeof strings3[3]);

	return 0;
}