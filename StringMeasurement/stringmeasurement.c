#include <stdio.h>
#include <string.h>

int main() {
	
	char wvu_arr[] = "West Virginia University";
	char* wvu_ptr = "West Virginia Univeristy";

	//Print length of string
	printf_s("length of %s is %d.\n", wvu_arr, strlen(wvu_arr));
	
	// Get size of 
	printf_s("Size of wvu_arr is %d.\n", sizeof(wvu_arr));
	printf_s("Size of wvu_ptr is %d.\n", sizeof(wvu_ptr));
	printf_s("Size of *wvu_ptr is %d.\n", sizeof(*wvu_ptr));
	return 0;
}