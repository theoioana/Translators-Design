%{
#include <stdio.h>
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char* s);
extern int yylex(void);

%}
%union{
    
    Node *node;
    char* strings;
}
%token <strings> O_HTML
%token <strings> C_HTML
%token <strings> O_HEAD
%token <strings> C_HEAD
%token <strings> O_BODY
%token <strings> C_BODY
%token <strings> O_FRAMESET
%token <strings> C_FRAMESET
%token <strings> O_FRAME
%token <strings> O_NOFRAME
%token <strings> C_NOFRAME
%token <strings> O_FORM
%token <strings> C_FORM
%token <strings> O_INPUT
%token <strings> O_SELECT
%token <strings> C_SELECT
%token <strings> O_OPTION
%token <strings> C_OPTION
%token <strings> O_TABLE
%token <strings> C_TABLE
%token <strings> O_TR
%token <strings> C_TR
%token <strings> O_TD
%token <strings> C_TD
%token <strings> O_TH
%token <strings> C_TH
%token <strings> O_THEAD
%token <strings> C_THEAD
%token <strings> O_TBODY
%token <strings> C_TBODY
%token <strings> O_IMG
%token <strings> O_A
%token <strings> C_A
%token <strings> O_LINK
%token <strings> O_UL
%token <strings> C_UL
%token <strings> O_OL
%token <strings> C_OL
%token <strings> O_LI
%token <strings> C_LI
%token <strings> O_B
%token <strings> C_B
%token <strings> O_I
%token <strings> C_I
%token <strings> O_U
%token <strings> C_U
%token <strings> O_SMALL
%token <strings> C_SMALL
%token <strings> O_SUP
%token <strings> C_SUP
%token <strings> O_SUB
%token <strings> C_SUB
%token <strings> O_CENTER
%token <strings> C_CENTER
%token <strings> O_FONT
%token <strings> C_FONT
%token <strings> O_H1
%token <strings> C_H1
%token <strings> O_H2
%token <strings> C_H2
%token <strings> O_H3
%token <strings> C_H3
%token <strings> O_H4
%token <strings> C_H4
%token <strings> O_H5
%token <strings> C_H5
%token <strings> O_H6
%token <strings> C_H6
%token <strings> O_P
%token <strings> C_P
%token <strings> O_HR
%token <strings> O_BR
%token <strings> O_DIV
%token <strings> C_DIV
%token TEXT

%type <node> html_document

%start html_document
%%

html_document 
    : html_tag  { $$ = createHtmlDocumentNode($1); astRoot = $$;}
    ;

html_tag
    : O_HTML html_content C_HTML { $$ = createHtmlTagNode($2, $1, $3); }
    ;

html_content
    : head_tag body_tag { $$ = createHtmlContentNode($1, $2, NULL); }
    | body_tag { $$ = createHtmlContentNode(NULL, $1, NULL); }
    | head_tag { $$ = createHtmlContentNode($1, NULL, NULL); }
    | head_tag frameset_tag { $$ = createHtmlContentNode($1, NULL, $2); }
    ;

head_tag
    : O_HEAD head_content C_HEAD { $$ = createHeadTagNode($2, $1, $3); }
    | O_HEAD C_HEAD { $$ = createTagSpecifier("O_HEAD", "C_HEAD"); }
    ;

head_content
    : O_LINK { $$ = createTagSpecifier("O_LINK", NULL); }
    ;

frameset_tag
    : O_FRAMESET frameset_content_list C_FRAMESET
    | O_FRAMESET C_FRAMESET
    ;

frameset_content_list
    : frameset_content
    | frameset_content_list frameset_content;

frameset_content
    : O_FRAME
    | noframes_tag
    ;

noframes_tag 
    : O_NOFRAME body_content_list C_NOFRAME
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
    : O_BODY body_content_list C_BODY
    | O_BODY C_BODY
    ;

body_content_list
    : body_content 
    | body_content_list body_content
    ;

body_content 
    : O_HR
    | block
    | heading
    | text
    ;

block
    : block_content_list
    |
    ;

block_content_list
    : block_content
    | block_content_list block_content
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
    : O_CENTER body_content_list C_CENTER
    ;

div_tag 
    : O_DIV body_content_list C_DIV
    ;

form_tag
    : O_FORM form_content_list C_FORM
    | O_FORM C_FORM
    ;

form_content_list
    : form_content
    | form_content_list form_content
    ;

form_content 
    : O_INPUT
    | body_content
    | select_tag
    ;

select_tag
    : O_SELECT select_content_list C_SELECT
    | O_SELECT C_SELECT
    ;

select_content_list
    : select_content
    | select_content_list select_content
    ;

select_content  
    : option_tag
    ;

option_tag
    : O_OPTION TEXT C_OPTION
    ;

ol_tag 
    : O_OL li_tag_list C_OL
    | O_OL C_OL
    ;

li_tag_list
    : li_tag
    | li_tag_list li_tag
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
    : O_TABLE table_content_list C_TABLE
    | O_TABLE C_TABLE
    ;
table_content_list
    : table_content
    | table_content_list table_content
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
    : O_TD body_content_list C_TD
    ;

th_tag
    : O_TH body_content_list C_TH
    ;

ul_tag 
    : O_UL li_tag_list C_UL
    ;

text 
    : text_content_list
    |
    ;

text_content_list
    : text_content
    | text_content_list text_content
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

