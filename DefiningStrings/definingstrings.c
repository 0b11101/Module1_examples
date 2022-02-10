#include <stdio.h>

int main() {
	// char array with initializer

	char color_str[] = "blue"; // auto adds \0
	//char array 
	char color_arr[] = { 'b','l','u','e','\0'};

	//char pointer 
	char* colorPtr = "blue"; //read-only
	 
	return 0;
}