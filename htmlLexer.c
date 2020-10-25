// htmlLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include "Symbol.h"

extern FILE* yyin;
extern int yylex(void);

int main()
{
    int tokenValue = -1;
    yyin = fopen("input.csrc", "rt");
    
    if (yyin != NULL) {
        while ( (tokenValue = yylex()) != 0) {
            printf(" --> TOKEN: %d \n", tokenValue);
        }
    }
    else {
        printf("No input file found!");
    }
}
