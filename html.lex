%{
#include <stdio.h>
#include "ast.h"
#include "html.tab.h"

void count();
%}

alpha [a-zA-Z]
digit [0-9]
/* this regex does not require http/https protocol for urls */
url [-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)
image [/img/ig]
input [<input\s+[^>]*[^>]*>]
br [<br+?>]
hr [<hr+?>]
link [<\s*link[^>]*>((.|\n)*)<\s*\/\s*link>]
html [<\s*html[^>]*>((.|\n)*)<\s*\/\s*html>]
body [<\s*body[^>]*>((.|\n)*)<\s*\/\s*body>]
framset [<\s*framset[^>]*>((.|\n)*)<\s*\/\s*framset>]
frame [<\s*frame[^>]*>((.|\n)*)<\s*\/\s*frame>]
noframe [<\s*noframe[^>]*>((.|\n)*)<\s*\/\s*noframe>]
form [<\s*form[^>]*>((.|\n)*)<\s*\/\s*form>]
select [<\s*select[^>]*>((.|\n)*)<\s*\/\s*select>]
option [<\s*option[^>]*>((.|\n)*)<\s*\/\s*option>]
tabel [<\s*tabel[^>]*>((.|\n)*)<\s*\/\s*tabel>]
tr [<\s*tr[^>]*>((.|\n)*)<\s*\/\s*tr>]
td [<\s*td[^>]*>((.|\n)*)<\s*\/\s*td>]
th [<\s*th[^>]*>((.|\n)*)<\s*\/\s*th>]
thead [<\s*thead[^>]*>((.|\n)*)<\s*\/\s*thead>]
tbody [<\s*tbody[^>]*>((.|\n)*)<\s*\/\s*tbody>]
a [<\s*a[^>]*>((.|\n)*)<\s*\/\s*a>]
ul [<\s*ul[^>]*>((.|\n)*)<\s*\/\s*ul>]
ol [<\s*ol[^>]*>((.|\n)*)<\s*\/\s*ol>]
li [<\s*li[^>]*>((.|\n)*)<\s*\/\s*li>]
b [<\s*b[^>]*>((.|\n)*)<\s*\/\s*b>]
i [<\s*i[^>]*>((.|\n)*)<\s*\/\s*i>]
u [<\s*u[^>]*>((.|\n)*)<\s*\/\s*u>]
small [<\s*small[^>]*>((.|\n)*)<\s*\/\s*small>]
sup [<\s*sup[^>]*>((.|\n)*)<\s*\/\s*sup>]
sub [<\s*sub[^>]*>((.|\n)*)<\s*\/\s*sub>]
center [<\s*center[^>]*>((.|\n)*)<\s*\/\s*center>]
font [<\s*font[^>]*>((.|\n)*)<\s*\/\s*font>]
h1 [<\s*h1[^>]*>((.|\n)*)<\s*\/\s*h1>]
h2 [<\s*h2[^>]*>((.|\n)*)<\s*\/\s*h2>]
h3 [<\s*h3[^>]*>((.|\n)*)<\s*\/\s*h3>]
h4 [<\s*h4[^>]*>((.|\n)*)<\s*\/\s*h4>]
h5 [<\s*h5[^>]*>((.|\n)*)<\s*\/\s*h5>]
h6 [<\s*h6[^>]*>((.|\n)*)<\s*\/\s*h6>]
p [<\s*p[^>]*>((.|\n)*)<\s*\/\s*p>]

%%
"<html>"	{ count(); yylval.strings = strdup(yytext); return O_HTML; }
"</html>"	{ count(); yylval.strings = strdup(yytext); return C_HTML; }
"<body>"	{ count(); yylval.strings = strdup(yytext); return O_BODY; }
"</body>"	{ count(); yylval.strings = strdup(yytext); return C_BODY; }
"<framset>"	{ count(); yylval.strings = strdup(yytext); return O_FRAMESET; }
"</framset>"	{ count(); yylval.strings = strdup(yytext); return C_FRAMESET; }
"<frame>"	{ count(); yylval.strings = strdup(yytext); return O_FRAME; }
"<noframe>" {  count(); yylval.strings = strdup(yytext); return O_NOFRAME; }
"</noframe>" {  count(); yylval.strings = strdup(yytext); return C_NOFRAME; }
"<form>"	{ count(); yylval.strings = strdup(yytext); return O_FORM;}
"</form>"	{ count(); yylval.strings = strdup(yytext); return C_FORM;}
"<input"	{ count(); yylval.strings = strdup(yytext); return O_INPUT;}
"<select" { count(); yylval.strings = strdup(yytext); return O_SELECT;}
"</select>" { count(); yylval.strings = strdup(yytext); return C_SELECT;}
"<option"  { count(); yylval.strings = strdup(yytext); return O_OPTION;}
"</option>"  { count(); yylval.strings = strdup(yytext); return C_OPTION;}
"<tabel>"	{ count(); yylval.strings = strdup(yytext); return O_TABLE;}
"</tabel>"	{ count(); yylval.strings = strdup(yytext); return C_TABLE;}
"<tr>"	{ count(); yylval.strings = strdup(yytext); return O_TR;}
"</tr>"	{ count(); yylval.strings = strdup(yytext); return C_TR;}
"<td>"	{ count(); yylval.strings = strdup(yytext); return O_TD;}
"</td>"	{ count(); yylval.strings = strdup(yytext); return C_TD;}
"<th>"	{ count(); yylval.strings = strdup(yytext); return O_TH;}
"</th>"	{ count(); yylval.strings = strdup(yytext); return C_TH;}
"<thead>" { count(); yylval.strings = strdup(yytext); return O_THEAD;}
"</thead>" { count(); yylval.strings = strdup(yytext);  return C_THEAD;}
"<tbody>" { count(); yylval.strings = strdup(yytext); return O_TBODY;}
"</tbody>" { count(); yylval.strings = strdup(yytext); return C_TBODY;}
"<img>" { count(); yylval.strings = strdup(yytext); return O_IMG;}
"<a" { count(); yylval.strings = strdup(yytext); return O_A;}
"</a>" { count(); yylval.strings = strdup(yytext); return C_A;}
"<link" { count(); yylval.strings = strdup(yytext); return O_LINK;}
"<ul>"  { count(); yylval.strings = strdup(yytext); return O_UL;}
"</ul>"  { count(); yylval.strings = strdup(yytext); return C_UL;}
"<ol>"	{ count(); yylval.strings = strdup(yytext); return O_OL;}
"</ol>"	{ count(); yylval.strings = strdup(yytext); return C_OL;}
"<li>"	{ count(); yylval.strings = strdup(yytext); return O_LI;}
"</li>" { count(); yylval.strings = strdup(yytext); return C_LI;}
"<b>"	{ count(); yylval.strings = strdup(yytext); return O_B;}
"</b>"	{ count(); yylval.strings = strdup(yytext); return C_B;}
"<i>"	{ count(); yylval.strings = strdup(yytext); return O_I;}
"</i>"	{ count(); yylval.strings = strdup(yytext); return C_I;}
"<u>"	{ count(); yylval.strings = strdup(yytext); return O_U;}
"</u>"	{ count(); yylval.strings = strdup(yytext); return C_U;}
"<small>" { count(); yylval.strings = strdup(yytext); return O_SMALL;}
"</small>" { count(); yylval.strings = strdup(yytext); return C_SMALL;}
"<sup>"	{ count(); yylval.strings = strdup(yytext); return O_SUP;}
"<sub>"	{ count(); yylval.strings = strdup(yytext); return C_SUB;}
"<center>" { count(); yylval.strings = strdup(yytext); return O_CENTER;}
"</center>" { count(); yylval.strings = strdup(yytext); return C_CENTER;}
"<font>"  { count(); yylval.strings = strdup(yytext); return O_FONT;}
"</font>"  { count(); yylval.strings = strdup(yytext); return C_FONT;}
"<h1>"	{ count(); yylval.strings = strdup(yytext); return O_H1;}
"</h1>"	{ count(); yylval.strings = strdup(yytext); return C_H1;}
"<h2>"	{ count(); yylval.strings = strdup(yytext); return O_H2;}
"</h2>"	{ count(); yylval.strings = strdup(yytext); return C_H2;}
"<h3>"	{ count(); yylval.strings = strdup(yytext); return O_H3;}
"</h3>"	{ count(); yylval.strings = strdup(yytext); return C_H3;}
"<h4>"	{ count(); yylval.strings = strdup(yytext); return O_H4;}
"</h4>"	{ count(); yylval.strings = strdup(yytext); return C_H4;}
"<h5>"	{ count(); yylval.strings = strdup(yytext); return O_H5;}
"</h5>"	{ count(); yylval.strings = strdup(yytext); return C_H5;}
"<h6>" { count(); yylval.strings = strdup(yytext); return O_H6;}
"</h6>" { count(); yylval.strings = strdup(yytext); return C_H6;}
"<p>"	{ count(); yylval.strings = strdup(yytext); return O_P;}
"</p>"	{ count(); yylval.strings = strdup(yytext); return C_P;}
"<hr>"	{ count(); yylval.strings = strdup(yytext); return O_HR;}
"<br>" { count(); yylval.strings = strdup(yytext); return O_BR;}
"<head>" { count(); yylval.strings = strdup(yytext); return O_HEAD;}
"</head>" { count(); yylval.strings = strdup(yytext); return C_HEAD;}
"eof" {return EOF;}
%%

int yywrap()
{
	return 0;
}

int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}