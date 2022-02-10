#include <stdio.h>
#include <stddef.h> // has def for null

int main() {

	//create variables
	int established = 1867, wvu_established = 1863;

	//create pointer 
	// can declare multiple on the same line e.g. *established_Ptr, *other_Ptr, ... , *last_ptr;
	int* established_Ptr = &wvu_established;

	//Make sure we are pointing at real allocated memory 
	established_Ptr = &established; // mem "&"ddress of established var 

	//When you create a pointer that doesn't point at anything always point at null
	int* nothing = NULL; 

	//Print memory used
	printf("int variable: %u bytes\n", sizeof(established));
	printf("int* pointer: %u bytes\n", sizeof(established_Ptr));
	//64 bit compiler has different pointer and int byte sizes var: 4 bytes ; pointer: 8 bytes
	//86 bit compiler has the same size var: 4 bytes ; pointer: 4 bytes

	// Retrieve values from pointers i.e. derefference
	printf("Value pointed at by established_Ptr:  %d\n", *established_Ptr); //De-reference *established pointer and get the value
	printf("Memory address of established_Ptr: %d\n", established_Ptr); //De-reference *established pointer and get the value

	int binaries_with_poointers = *established_Ptr - wvu_established;

	//Change the addresss of the values
	*established_Ptr = 2000;

	// Try to access memory not allocated
	//*nothing = 7; //Should throw an error
	if (nothing != NULL) {
		*nothing = 7;
	}


	return 0;
}