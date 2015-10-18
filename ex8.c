#include <stdio.h>

int main(int argc, char  *argv[])
{
	char full_name[] = {
		'T', 'h' ,'o' ,'m' ,'a' ,'s',
		' ', 
		'Z', 'e', 'h', 'e', '\0' 
	};
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Thomas";

	// WARNING: On some systems you may have to change the
	// %ld in this code to a %u since it will use unsigned ints
	printf("The size of int: %u\n", sizeof(int));
	printf("The size of areas (int[]): %u\n", sizeof(areas));
	printf("The first areas is %d, the 2nd %d.\n", areas[0], areas[1]);

	printf("The size of a char: %u\n", sizeof(char));
	printf("The size of name (char[]): %u\n", sizeof(name));
	printf("The number of chars: %u\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %u\n", sizeof(full_name));
	printf("The number of chars: %u\n", sizeof(full_name) / sizeof(char));

	//printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	// assigning some values to areas
	areas[0] = 100;
	areas[1] = 200;
	areas[sizeof(int)] = sizeof(long);

	// prints all elements of areas
	for (int i = 0; i < sizeof(areas) / sizeof(int); ++i)
	{
		printf("%d\n", areas[i]);
	}

	//assigning elements to name and full_name  not possible !!

	// print elements of name 
	for (int i = 0; i < (sizeof(name) / sizeof(char)); ++i)
	{
		printf("%c", name[i]);
	}

	return 0;
}