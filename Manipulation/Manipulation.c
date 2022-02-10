#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main() {
	
	//Define strings to use
	char wvu[50] = "West Virginia University";
	char* abbrv = "WVU"; //READ ONLYq

	//copying strings
	//char dest[50]; 
	//strcpy(dest, wvu);// unbounded copy

	//printf("dest: %s\n", dest);
	//printf("abbrv: %s\n", abbrv);
	//
	//char strncpy_dest[50];
	//strncpy(strncpy_dest, wvu, 5);
	//strncpy_dest[5] = "\0";

	//char strcpy_s_dest[5];
	//strcpy_s(strcpy_s_dest, 50, wvu);

	//Concatenation
	//strcat(wvu, " is in morgantown."); // unbounded concat
	size_t wvu_len = strlen(wvu);
	strncat(wvu, abbrv, 3); //safer but we need to figure out where the last position is
	wvu[wvu_len + 3] = '\0';

	return 0;
}