#include <stdio.h>

int main(int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

	unsigned long  universe_of_defects = 10L * 1024L * 1024L * 1024L;
	printf("You are expected to have %ld bugs.\n",  universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);   // %e is scientific notation

	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';				// null byte charakter number 0
	int care_percentage = bugs * nul_byte;	 // = 0
	printf("Which means you should care %d%%.\n", care_percentage);  // %% percentage to print '

	printf("Nul byte %s \n", nul_byte);
	

	return 0;
}
