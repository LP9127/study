#include "zhushiconvert.h"
#include <stdlib.h>
int main()
{
	FILE *pread = NULL;
	FILE *pwrite = NULL;
	pread = fopen("input.c", "r");
	if (NULL == pread)
	{
		perror("file to read");
		exit(EXIT_FAILURE);
	}
	pwrite = fopen("output.c","w");
	if (NULL == pwrite)
	{
		fclose(pread);
		perror("file to write");
		exit(EXIT_FAILURE);
	}
	CommentConvert(pread, pwrite);
	fclose(pread);
	fclose(pwrite);
	return 0;
}