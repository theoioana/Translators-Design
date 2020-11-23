// htmlLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
#include "Symbol.h"
#include "ast.h"

extern FILE* yyin;
extern int yyparse(void);
extern int yydebug;
extern Node* astRoot;

int main()
{
    //yydebug = 1;
    int tokenValue = -1;
    yyin = fopen("input.csrc", "rt");
    
    if (yyin != NULL) 
    {
        int result = yyparse();
        switch (result)
        {
        case 0:
            printf("Parse succesful!\n");
            break;
        case 1:
            printf("Invalid input encountered.\n");
            break;
        case 2:
            printf("Out of memory.\n");
            break;
        default:
            break;
        }

        /*while (tokenValue = yylex() != 0) {
            printf(" --> TOKEN: %d \n", tokenValue);
        }*/
        printAst(astRoot, 0);
        fclose(yyin);
    }
    else {
        printf("No input file found!");
    }
}
