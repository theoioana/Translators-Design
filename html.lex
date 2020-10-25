%{
#include <stdio.h>
#include "Symbol.h"

%}

alpha [a-zA-Z]
digit [0-9]
/* this regex does not require http/https protocol for urls */
url (https?:\/\/)?([\w\-])+\.{1}([a-zA-Z]{2,63})([\/\w-]*)*\/?\??([^#\n\r]*)?#?([^\n\r]*)

%%
">" { count(); return CLOSING_TAG; }
"/>" { count(); return B_CLOSING_TAG; }
"<html"	{ count(); return O_HTML; }
"/html>"	{ count(); return C_HTML; }
"<body"	{ count(); return O_BODY; }
"</body>"	{ count(); return O_BODY; }
"<framset"	{ count(); return O_FRAMESET; }
"</framset>"	{ count(); return C_FRAMESET; }
"<frame"	{ count(); return O_FRAME; }
"</frame>"	{ count(); return C_FRAME; }
"<noframe" {  count(); return O_NOFRAME; }
"</noframe>" {  count(); return C_NOFRAME; }
"<form"	{ count(); return O_FORM;}
"</form>"	{ count(); return C_FORM;}
"<input"	{ count(); return O_INPUT;}
"<select" { count(); return O_SELECT;}
"</select>" { count(); return C_SELECT;}
"<option"  { count(); return O_OPTION;}
"</option>"  { count(); return C_OPTION;}
"<tabel"	{ count(); return O_TABLE;}
"</tabel>"	{ count(); return C_TABLE;}
"<tr>"	{ count(); return O_TR;}
"</tr>"	{ count(); return C_TR;}
"<td>"	{ count(); return O_TD;}
"</td>"	{ count(); return C_TD;}
"<th>"	{ count(); return O_TH;}
"</th>"	{ count(); return C_TH;}
"<thead" { count(); return O_THEAD;}
"</thead>" { count(); return C_THEAD;}
"<tbody>" { count(); return O_TBODY;}
"</tbody>" { count(); return C_TBODY;}
"<img" { count(); return O_IMG;}
"<a" { count(); return O_A;}
"<link" { count(); return O_LINK;}
"<ul>"  { count(); return O_UL;}
"</ul>"  { count(); return C_UL;}
"<ol>"	{ count(); return O_OL;}
"</ol>"	{ count(); return C_OL;}
"<li>"	{ count(); return O_LI;}
"</li>"	{ count(); return C_LI;}
"<b>"	{ count(); return O_B;}
"</b>"	{ count(); return C_B;}
"<i>"	{ count(); return O_I;}
"</i>"	{ count(); return C_I;}
"<u>"	{ count(); return O_U;}
"</u>"	{ count(); return C_U;}
"<small>" { count(); return O_SMALL;}
"</small>" { count(); return C_SMALL;}
"<sup>"	{ count(); return O_SUP;}
"<sub>"	{ count(); return C_SUB;}
"<center>" { count(); return O_CENTER;}
"</center>" { count(); return C_CENTER;}
"<font>"  { count(); return O_FONT;}
"</font>"  { count(); return C_FONT;}
"<h1>"	{ count(); return O_H1;}
"</h1>"	{ count(); return C_H1;}
"<h2>"	{ count(); return O_H2;}
"</h2>"	{ count(); return C_H2;}
"<h3>"	{ count(); return O_H3;}
"</h3>"	{ count(); return C_H3;}
"<h4>"	{ count(); return O_H4;}
"</h4>"	{ count(); return C_H4;}
"<h5>"	{ count(); return O_H5;}
"</h5>"	{ count(); return C_H5;}
"<h6>" { count(); return O_H6;}
"</h6>" { count(); return C_H6;}
"<p>"	{ count(); return O_P;}
"</p>"	{ count(); return O_P;}
"<hr>"	{ count(); return O_HR;}
"</hr>"	{ count(); return C_HR;}
"<br>" { count(); return O_BR;}
"</br>" { count(); return C_BR;}
{url} {count(); return URL;}
{digit}+       { count(); return NUMBER;}
%%

int yywrap()
{
	return 0;
}

int column = 0;

int count(){
    int i;

    for(i = 0; yytext[i] != '\0'; i++){
        if(yytext[i] == '\n')
            column = 0;
        else if (yytext[i] == '\t')
            column += 8 - (column % 8);
        else
            column ++;
    }
    ECHO;
}