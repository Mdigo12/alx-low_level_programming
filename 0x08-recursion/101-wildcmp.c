#include "main.h"

int _strlen(char *str);
void iterative_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * _strlen - lenth of string ignoring wildcard characters
 * @str: input string
 *
 * Return: lenth of the string
 */

int _strlen(char *str)
{
	int len = 0;

	if (*str != '\0' && *str != '*')
		len = 1 + _strlen(str + 1);
	return (len);
}

/**
 * iterative_wild - goes through the string located at wildcard
 * until it points to a non-wildcard character
 * @wildstr: the string to be iterated
 */

void  iterative_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterative_wild(wildstr);
	}
}
/**
 * postfix_match - checks if string matches
 * @str: string to be matched
 * @postfix: postfix string
 *
 * Return: if match, pointer to a null byte at end of postfix
 * otherwise, pointer to the fisrt unmatched character in postfix
 */

char *postfix_match(char *str, char *postfix)
{
	int str_len = _strlen(str) - 1;
	int postfix_len = _strlen(postfix) - 1;

	if (*postfix == '*')
		iterative_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}
/**
 * wildcmp - compares two strings while considering wildcards
 * @s1: Character string one
 * @s2: Character string two
 *
 * Return: 1 if identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterative_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
