#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {

	//Define Strings
	char wvu[] = "West Virginia University";
	char abbrv[] = "Wvu";

	int comparison = strcmp(wvu, abbrv);
	printf("Comparison: %d\n", comparison);

	int comparison_n = strncmp(wvu, abbrv, 2); // stops after comparing specific value
	printf("Comparison_n: %d\n", comparison_n); // 0 means that the chars are equal

	// Find position
	char* position = strchr(wvu, 'i'); // first occurence
	if (position == NULL) {
		puts("Character not found.\n");
	}
	else
		printf("Position: %s\n", position);

	char* position2 = strrchr(wvu, 'i'); // last occurence
	if (position2 == NULL) {
		puts("Character not found.\n");
	}
	else
		printf("Position: %s\n", position2);

	char* position3 = strstr(wvu, "West"); // Substring
	if (position3 == NULL) {
		puts("Substring not found.\n");
	}
	else
		printf("Substring position: %s\n", position3);

	// Validate
	char* hex_test = "963FBAG";
	size_t allowed_length = strspn(hex_test, "0123456789ABCDEF");
	printf("allowed: %zu\n", allowed_length);
	
	if (allowed_length == strlen(hex_test)) {
		puts("Only allowed characters are in the string.\n");
	}
	else {
		puts("Dissallowed chars in string\n");
	}

	size_t allowed_length2 = strcspn(hex_test, "0123456789ABCDEF"); //how many chars of the allowed are not in list??
	printf("allowed2: %zu \n", allowed_length2);
	
	if (allowed_length2 == 0) {
		puts("Only allowed characters are in the string.\n");
	}
	else {
		puts("Dissallowed chars in string\n");
	}

	//TOKENIZE i.e split strings 
	//char* token1 = strtok(wvu, " ");

	//printf("%s\n", token1);

	//char* token2 = strtok(NULL, " ");
	//printf("%s\n", token2);

	char* token = strtok(wvu, " ");
	while (token != NULL) {
		//print
		printf("%s\n", token);

		//get another token
		token = strtok(NULL, " ");
	}


	return 0;
}