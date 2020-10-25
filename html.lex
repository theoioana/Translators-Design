%{
#include <stdio.h>
#include "Symbol.h"

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
{html}	{ count(); return HTML; }
{body}	{ count(); return BODY; }
{framset}	{ count(); return FRAMESET; }
{frame}	{ count(); return FRAME; }
{noframe} {  count(); return NOFRAME; }
{form}	{ count(); return FORM;}
{input}	{ count(); return INPUT;}
{select} { count(); return SELECT;}
{option}  { count(); return OPTION;}
{tabel}	{ count(); return TABLE;}
{tr}	{ count(); return TR;}
{td}	{ count(); return TD;}
{th}	{ count(); return TH;}
{thead}	{ count(); return THEAD;}
{tbody} { count(); return (TBODY);}
{image}	{ count(); return (IMG);}
{a}	{ count(); return A;}
{link} { count(); return LINK;}
{ul}  { count(); return UL;}
{ol}	{ count(); return OL;}
{li}	{ count(); return LI;}
{b}	{ count(); return B;}
{i}	{ count(); return I;}
{u}	{ count(); return U;}
{small} { count(); return SMALL;}
{sup}	{ count(); return SUP;}
{sub}	{ count(); return SUB;}
{center} { count(); return CENTER;}
{font}  { count(); return FONT;}
{h1}	{ count(); return H1;}
{h2}	{ count(); return H2;}
{h3}	{ count(); return H3;}
{h4}	{ count(); return H4;}
{h5}	{ count(); return H5;}
{h6} { count(); return H6;}
{p}	{ count(); return P;}
{hr}	{ count(); return HR;}
{br} { count(); return BR;}
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