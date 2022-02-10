#include <stdio.h>
#include <stddef.h> // has def for null

void change_values(int* aPtr, int* bPtr);
int main() {

	//Create variables
	int a = 5, b = 7;

	//Create pointeres to variables
	int* aPtr = &a;
	int* bPtr = &b;

	//Print values
	change_values(&a, bPtr);

	printf("aPTr in parent : %d\n", *aPtr);
	printf("bPTr in parent : %d\n", *bPtr);
		

	return 0;
}

void change_values(int* aPtr, int* bPtr) {

	*aPtr = 10;
	bPtr = aPtr;
	printf("bPtr in funciton: %d\n", *bPtr);

}