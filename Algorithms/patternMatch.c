#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pattern_match(char* str1, char* str2){
	int j,k; 
	for(j=0; j<strlen(str1); ++j){
		for(k=0; (k<strlen(str2) && (str2[k] == str1[k+j] )); k++);
		if(k == strlen(str2))
			return j;
	}
	return -1;
}

int main() {
	char *str1, *str2;
	printf("What could be the maximum size of the 2nd string? ");

	if(str1 == NULL)  {
		printf("Can not allocate memory for the string...\n");
		return -1;
	}	
	str2 = (char *) malloc(size2 * sizeof(char) );
	if(str2 == NULL)  {
		printf("Can not allocate memory for the string...\n");
		return -1;
	}	

	
	printf("Enter the first string:\n");
	scanf("%s", str1);
	printf("Enter the second string:\n");
	scanf("%s", str2);

	position=pattern_match(str1, str2);
	if (position>-1)
		printf("'%s' starts from the %d-th character of the '%s' :\n", str2, position+1, str1);
	else
		printf("'%s' pattern could not be found in the '%s' :\n", str2, str1);

	return 0;
}