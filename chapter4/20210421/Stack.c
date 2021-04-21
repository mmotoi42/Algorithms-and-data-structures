#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int S[1000], pos;

int pop()
{
	pos--;
	return (S[pos + 1]);
}

void push(int x)
{
	pos++;
	S[pos] = x;
}

void	print_stack()
{
	printf("Stack:");
	for (int i = pos; i > 0; i--)
		printf("%d ", S[i]);
	printf("\n");
}

int main()
{
	pos = 0;
	char s[1000];
	int a, b;

	while (scanf("%s", s) != EOF)
	{
		if (s[0] == '+')
		{
			a = pop();
			b = pop();
			push(b + a);
		}
		else if (s[0] == '-')
		{
			a = pop();
			b = pop();
			push(b - a);
		}
		else if (s[0] == '*')
		{
			a = pop();
			b = pop();
			push(b * a);
		}
		else
			push(atoi(s));
		print_stack();
	}
	printf("%d\n", pop());
}