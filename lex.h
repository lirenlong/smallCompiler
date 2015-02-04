/*************************************************************************
	> File Name: lex.h
	> Author: rogerAce
	> Created Time: Mon Apr 29 21:58:03 2013
 ************************************************************************/
#ifndef _LEX_H_
#define _LEX_H_

#define IsDigit(c)         (c >= '0' && c <= '9')
#define IsOctDigit(c)      (c >= '0' && c <= '7')
#define IsHexDigit(c)      (IsDigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
#define IsLetter(c)        ((c >= 'a' && c <= 'z') || (c == '_') || (c >= 'A' && c <= 'Z'))
#define IsLetterOrDigit(c) (IsLetter(c) || IsDigit(c))
#define ToUpper(c)		   (c & ~0x20)

extern char *CURSOR;

void lexerInit(void);

struct Token getNextToken();

#endif
