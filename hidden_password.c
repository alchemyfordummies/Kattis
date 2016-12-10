#include <stdio.h>
#include <string.h>

/*
main:
1. we get the password and the containing phrase
2. we run the validPass function and print pass or fail depending on its result

validPass:
1. set up some for-loop variables and lengths
	a) we set jstart to where we left off in the phrase, so that we know what
		characters we've already checked through
2. loop through each character in the password
	a) if we hit the end of the phrase, we haven't found what we're looking for,
		so we return false
3. loop through each character in the phrase
	a) if the password and phrase characters are equal, break to next password
		character
	b) if not, check to see if any other character in the password is equal
		i. if so, return false
 */

int validPass(char* pass, char* phrase) {
	int i, j, curr;
	int jstart = 0;
	int passlen = strlen(pass);
	int phraselen = strlen(phrase);
	for (i = 0; i < passlen; i++) {
		for (j = jstart; j < phraselen; j++) {
			if (pass[i] == phrase[j]) break;
			else {
				for (curr = i + 1; curr < passlen; curr++) {
					if (pass[curr] == phrase[j]) {
						return 0;
					}
				}
			}

			if (j == phraselen - 1) return 0;
		}

		jstart = j + 1;
	}

	return 1;
}

int main(void) {
	char pass[8];
	char phrase[40];
	scanf("%s %s", pass, phrase);
	int valid = validPass(pass, phrase);
	if (valid) printf("PASS");
	else printf("FAIL");

	return 0;
}
