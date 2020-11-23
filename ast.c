#include "ast.h"
#include <malloc.h>
#include <string.h>
#include <stdio.h>

Node* createDefaultNode(const char* nodeName, unsigned int linksCount)
{
	Node* retNode = (Node*)malloc(sizeof(Node));
	if (retNode)
	{
		memset(retNode, 0, sizeof(Node));
		if (nodeName)
		{
			strcpy(retNode->type, nodeName);
		}
		retNode->numLinks = linksCount;
		if (linksCount > 0)
		{
			retNode->links = (Node**)malloc(linksCount * sizeof(Node*));
		}
	}
	return retNode;
}

Node* createHtmlDocumentNode(Node* html_tag)
{
	Node* retNode = createDefaultNode("HtmlDocument", 1);
	if (retNode)
	{
		retNode->links[0] = html_tag;
	}

	return retNode;

}

Node* createHtmlTagNode(Node* html_content, const char* opening_tag, const char* closing_tag)
{
	Node* retNode = createDefaultNode("HtmlTag", 1);
	if (retNode)
	{
		retNode->links[0] = html_content;
		if (opening_tag && closing_tag)
			strcpy(retNode->extraData, strcat(opening_tag, closing_tag));
		if (opening_tag)
			strcpy(retNode->extraData, opening_tag);
	}

	return retNode;

}

Node* createHtmlContentNode(Node* head_tag, Node* body_tag, Node* frameset_tag) {
	Node* retNode = createDefaultNode("HtmlContent", 3);
	if (retNode)
	{
		retNode->links[0] = head_tag;
		retNode->links[1] = body_tag;
		retNode->links[2] = frameset_tag;
	}

	return retNode;
}

Node* createHeadTagNode(Node* head_content, const char* opening_tag, const char* closing_tag) {
	Node* retNode = createDefaultNode("HeadTag", 1);
	if (retNode)
	{
		retNode->links[0] = head_content;
		if(opening_tag && closing_tag)
			strcpy(retNode->extraData, strcat(opening_tag, closing_tag));
		if(opening_tag)
			strcpy(retNode->extraData, opening_tag);
	}

	return retNode;
}

Node* createTagSpecifier(const char* opening_tag, const char* closing_tag)
{
	Node* retVal = createDefaultNode("TagSpecifier", 0);
	if (closing_tag == NULL)
		closing_tag = "/>";
	if (opening_tag && closing_tag)
		sprintf(retVal->extraData, "%s %s", opening_tag, closing_tag);
	return retVal;
}
void printAst(Node* ast, int level)
{
	int idx = 0;
	if (ast)
	{
		for (idx = 0; idx < level; idx++)
		{
			printf(" ");
		}
		if (ast->type)
		{
			printf("%s ", ast->type);
		}
		if (ast->numLinks)
		{
			printf(" - %d - %s\n", ast->numLinks, ast->extraData);
		}
		else
		{
			printf(" - %s\n", ast->extraData);
		}
		for (idx = 0; idx < ast->numLinks; idx++)
		{

			printAst(ast->links[idx], level + 1);
		}
	}
}
