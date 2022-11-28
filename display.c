#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* ptr;
	char str[500];
	ptr = fopen("data.txt", "r+");

	printf("content of this file are \n");

	while (fgets(str, 500, ptr) != NULL) {
		printf("%s", str);
	}

	fclose(ptr);
	return 0;
}
