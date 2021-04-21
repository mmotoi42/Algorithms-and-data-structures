#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int S[1000], pos;

int pop()
{
	pos--;
	return (S[pos++]);
}

int push(int x)
{
	pos++;
	S[pos] = x;
}

int main()
{
	pos = 0;
	char s[1000];
	int ret;

	while (scanf("%s", s) > 0)
	{
		if (s[0] == '+')
		{
			ret = pop();
			ret += pop();
			push(ret);
		}
		else if (s[0] == '-')
		{
			ret = pop();
			ret -= pop();
			push(ret);
		}
		else if (s[0] = '*')
		{
			ret = pop();
			ret *= pop();
			push(ret);
		}
		else
			push(atoi(s));
	}
	printf("%d\n", pop());
}