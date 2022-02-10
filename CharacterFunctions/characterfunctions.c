#include <stdio.h>
#include <ctype.h>

int main() {	
	char letter = 'a';
	char number = '9';
	char period = '.';
	char space = ' ';
	char terminiator = '\0';

	// isdigit, isspace, isalpha - check if it is a letter, islower,  isupper
	// isalnum - checks if alphanueric, isxdigit -hex, is blank - \s or \t
	// iscntrl - checks for things like \0 \n \t
	// isprint - printable characters
	// isgraph - space is printable but not graphable
	//ispunct - punctuation characters


	if (isdigit(period)) puts("True");
	else puts("False");

	char password[] = "jq9834FJR!A1";
	if (validate_password(password)) printf("valid");
	else printf("invalid");

	return 0;	
}
int validate_password(char password[]) {
	int index = 0;

	int char_count = 0;
	int uppercase = 0;
	int lowercase = 0;
	int digit_count = 0;
	int punct_count = 0;

	// process string
	while (password[index] != '\0') {
		if (!isgraph(password[index])) return 0;
		char_count++;
		uppercase += isupper(password[index]) ? 1 : 0;
		lowercase += islower(password[index]) ? 1 : 0;
		digit_count += isdigit(password[index]) ? 1 : 0;
		punct_count += ispunct(password[index]) ? 1 : 0;

		index++;
	}
	if ((char_count >= 8) && (digit_count >= 1) && lowercase >= 1 && uppercase >= 1 && punct_count >= 1)
		return 1;
	else
		return 0;
}