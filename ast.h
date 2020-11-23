#ifndef __AST_H
#define __AST_H

#define MAX_NODE_TYPE 50
#define MAX_EXTRA_DATA 50

typedef struct node {
	char type[MAX_NODE_TYPE];
	int numLinks;
	char extraData[MAX_EXTRA_DATA];
	struct node** links;
}Node;

Node* createTagSpecifier(const char* opening_tag, const char* closing_tag);
Node* createHtmlDocumentNode(Node* html_tag);
Node* createHtmlTagNode(Node* html_content, const char* opening_tag, const char* closing_tag);
Node* createHtmlContentNode(Node* head_tag, Node* body_tag, Node* frameset_tag);
Node* createHeadTagNode(Node* head_content, const char* opening_tag, const char* closing_tag);

Node* createDefaultNode(const char* nodeName, unsigned int linksCount);

void printAst(Node* ast, int level);
#endif
