%{
#include <stdio.h>

int yyerror(char* s);
extern int yylex(void);
%}
%token O_HTML
%token C_HTML
%token O_HEAD
%token C_HEAD
%token O_BODY
%token C_BODY
%token O_FRAMESET
%token C_FRAMESET
%token O_FRAME
%token O_NOFRAME
%token C_NOFRAME
%token O_FORM
%token C_FORM
%token O_INPUT
%token O_SELECT
%token C_SELECT
%token O_OPTION
%token C_OPTION
%token O_TABLE
%token C_TABLE
%token O_TR
%token C_TR
%token O_TD
%token C_TD
%token O_TH
%token C_TH
%token O_THEAD
%token C_THEAD
%token O_TBODY
%token C_TBODY
%token O_IMG
%token O_A
%token C_A
%token O_LINK
%token O_UL
%token C_UL
%token O_OL
%token C_OL
%token O_LI
%token C_LI
%token O_B
%token C_B
%token O_I
%token C_I
%token O_U
%token C_U
%token O_SMALL
%token C_SMALL
%token O_SUP
%token C_SUP
%token O_SUB
%token C_SUB
%token O_CENTER
%token C_CENTER
%token O_FONT
%token C_FONT
%token O_H1
%token C_H1
%token O_H2
%token C_H2
%token O_H3
%token C_H3
%token O_H4
%token C_H4
%token O_H5
%token C_H5
%token O_H6
%token C_H6
%token O_P
%token C_P
%token O_HR
%token O_BR
%token O_DIV
%token C_DIV
%token TEXT

%start html_document
%%

html_document 
    : html_tag
    ;

html_tag
    : O_HTML html_content C_HTML
    ;

html_content
    : head_tag body_tag
    | head_tag frameset_tag
    ;

head_tag
    : O_HEAD head_content C_HEAD
    | O_HEAD C_HEAD
    ;

head_content
    : O_LINK
    ;

frameset_tag
    : O_FRAMESET frameset_content C_FRAMESET
    | O_FRAMESET C_FRAMESET
    ;

frameset_content
    : O_FRAME
    | noframes_tag
    ;

noframes_tag 
    : O_NOFRAME body_content C_NOFRAME
    | O_NOFRAME C_NOFRAME
    ;

a_tag
    : O_A a_content C_A
    | O_A C_A
    ;

a_content
    : heading
    | text
    ;

heading
    : h1_tag
    | h2_tag
    | h3_tag
    | h4_tag
    | h5_tag
    | h6_tag
    ;

h1_tag 
    : O_H1 text C_H1
    ;

h2_tag 
    : O_H2 text C_H2
    ;

h3_tag 
    : O_H3 text C_H3
    ;

h4_tag 
    : O_H4 text C_H4
    ;

h5_tag 
    : O_H5 text C_H5
    ;

h6_tag 
    : O_H6 text C_H6
    ;
    
b_tag 
    : O_B text C_B
    ;

body_tag
    : O_BODY body_content C_BODY
    | O_BODY C_BODY
    ;

body_content 
    : O_HR
    | block
    | heading
    | text
    ;

block
    : block_content
    |
    ;

block_content  
    : center_tag
    | div_tag
    | form_tag
    | ol_tag
    | p_tag
    | table_tag
    | ul_tag
    ;

center_tag
    : O_CENTER body_content C_CENTER
    ;

div_tag 
    : O_DIV body_content C_DIV
    ;

form_tag
    : O_FORM form_content C_FORM
    | O_FORM C_FORM
    ;

form_content 
    : O_INPUT
    | body_content
    | select_tag
    ;

select_tag
    : O_SELECT select_content C_SELECT
    | O_SELECT C_SELECT
    ;

select_content  
    : option_tag
    ;

option_tag
    : O_OPTION TEXT C_OPTION
    ;

ol_tag 
    : O_OL li_tag C_OL
    | O_OL C_OL
    ;

li_tag
    : O_LI flow C_LI
    | O_LI flow C_LI li_tag
    |
    ;

flow 
    : flow_content
    |
    ;

flow_content
    : block
    | text
    ;

p_tag
    : O_P text C_P
    | O_P C_P
    ;

table_tag
    : O_TABLE table_content C_TABLE
    | O_TABLE C_TABLE
    ;

table_content 
    : O_THEAD tr_tag C_THEAD O_TBODY tr_tag C_TBODY
    | O_TBODY tr_tag C_TBODY
    | tr_tag
    ;

tr_tag
    : O_TR table_cell C_TR
    | O_TR C_TR
    ;

table_cell 
    : td_tag
    | th_tag
    ;

td_tag
    : O_TD body_content C_TD
    ;

th_tag
    : O_TH body_content C_TH
    ;

ul_tag 
    : O_UL li_tag C_UL
    ;

text 
    : text_content
    |
    ;

text_content
    : O_BR
    | O_IMG
    | a_tag
    | physical_style
    ;

physical_style
    : b_tag
    | font_tag
    | i_tag
    | small_tag
    | sub_tag
    | sup_tag
    | u_tag
    ;

font_tag 
    : O_FONT text C_FONT
    ;

i_tag
    : O_I text C_I
    ;

small_tag
    : O_SMALL text C_SMALL
    ;

sub_tag
    : O_SUB text C_SUB
    ;

sup_tag
    : O_SUP text C_SUP;

u_tag
    : O_U text C_U
    ;
%%
int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  

