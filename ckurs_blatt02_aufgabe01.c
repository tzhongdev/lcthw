// take num and devide by each number < than one
// is there a number besides num and 1 which dived num than its not prime
// nummer = 4
// index = 1

// while i < nummer
// if nummer % i ==

#include <stdio.h>
#include <stdlib.h>

int main () {

	int nummer = 2;
	int value = 0;

	printf("Ist %d eine Primzahl?\n", nummer);

	for (int i = 2; i <= nummer / 2; ++i)
	{
		if (nummer % i == 0)
			value = 1;
			break;
	}

	if (value == 1)
		printf("Nein\n");
	else
		printf("Ja\n");

	return 0;
}
