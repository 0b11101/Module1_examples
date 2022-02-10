#include <stdio.h>
#include <string.h>

int main() {

	//Generate strings
	char dest[80];
	sprintf(dest, "WVU was created in %d.", 1863);

	// scanf do not mix and match
	//char scanf_in[21];
	//scanf("%20s", scanf_in);

	// fgets
	char fgets_in[100];
	fgets(fgets_in, 100, stdin);

	// Clean up newline
	if (fgets_in[strlen(fgets_in) - 1] == '\n')
		fgets_in[strlen(fgets_in) - 1] = '\0';

	// sscanf --can parse an entire string
	int siblings = 0;
	sscanf(fgets_in, "%d",&siblings);
	
	return 0;
}