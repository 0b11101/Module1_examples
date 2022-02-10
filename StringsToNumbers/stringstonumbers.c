#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> // for NULL

int main() {

	//Define strings for conversions
	char double_string[] = "A85.8% of applicants are admitted to WVU";
	char* int_string = "1867 was when WVU was established";

	//Convert to double
	double double_atof = atof(double_string);
	printf("atof value: %f\n", double_atof);

	//convert to int
	int int_atoi = atoi(int_string);
	printf("atoi value: %d\n", int_atoi);

	//atof and atoi return 0 when there is an invalid input e.g. A1867, b1234

	//convert double and check for success
	char* strtod_remainderPtr = NULL; //not pointing anywhere
	double double_strtod = strtod(double_string, &strtod_remainderPtr);
	if (double_string == strtod_remainderPtr) puts("Could not convert double_string"); // compare mem loc of both to 
	else printf("strtod value: %f", double_strtod);									  // see if entire string is still there 

	//strtol will return a long strtoul to unsigned long
	char* strtol_remainderPtr = NULL;
	long long_strtol = strtol(int_string, &strtol_remainderPtr, 10); // 3rd par = base i.e. base 10
	if (int_string == strtol_remainderPtr) puts("Could not convert int_string");
	else printf("strtol value: %ld", long_strtol);
		
	return 0;
}