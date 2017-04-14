#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __ZHUSHICONVERT_H__
#define __ZHUSHICONVERT_H__

#include <stdio.h>

enum STATE
{
	NULL_convert,
	C_convert,
	CPP_convert,
	END_convert
};

void NULL_convert_(FILE *pread, FILE *pwrite);
void C_convert_(FILE *pread, FILE *pwrite);
void CPP_convert_(FILE *pread, FILE *pwrite);
void CommentConvert(FILE *pread, FILE *pwrite);

#endif // zhushiconvert.h