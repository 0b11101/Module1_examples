#include <stdio.h>
#include <string.h>

int main() {

	//Create sample array
	int int_in[] = { 1,2,3,4,5};
	int int_out[5] = { 0 };

	//Copy values to array
	memcpy(int_out, int_in, 5 * sizeof(int));

	//Move memory for shuffling values
	memmove(&int_in[0], &int_in[1], 4 * sizeof(int));

	//Compare values in memory
	int comparison = memcmp(int_in, int_out, 4*sizeof(int));
	printf("Comparison: %d", comparison);

	//Set memory
	memset(int_out, 0, sizeof(int_out));

	//Bzero 
	// Bzero is not part of the c standard and so it's best not to use it.

	return 0;
}