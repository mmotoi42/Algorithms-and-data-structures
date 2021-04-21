#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_DoublyLinkedList
{
	struct s_DoublyLinkedList *next, *prev;
	int	key;
}	t_dll;

t_dll *NIL = NULL;

void	list_init()
{
	NIL = (t_dll *)malloc(sizeof(t_dll));
	if (NIL == NULL)
		return;
	NIL->next = NIL;
	NIL->prev = NIL;
}

void	list_insert(int key)
{
	t_dll *elem = (t_dll *)malloc(sizeof(t_dll));
	if (elem == NULL)
	{
		printf("MALLOC_FAILURE\n");
		exit(1);
	}
	elem->key = key;
	if (NIL == NULL)
		list_init();
	elem->next = NIL->next;
	NIL->next->prev = elem;
	NIL->next = elem;
	elem->prev = NIL;
}

void	list_delete(int key)
{
	t_dll *list;

	list = NIL;
	while (list)
	{
		if (list->key == key)
		{
			list->next->prev = list->prev;
			list->prev->next = list->next;
			free(list);
			break;
		}
		list = list->next;
	}
}

void	deleteFirst()
{
	t_dll *list;

	if (NIL == NULL || NIL->next == NIL)
		return;
	list = NIL->next;
	NIL->next->next->prev = NIL;
	NIL->next = NIL->next->next;
	free(list);
}

void	deleteLast()
{
	t_dll *list;

	if (NIL == NULL || NIL->prev == NIL)
		return;
	list = NIL->prev;
	NIL->prev->prev->next = NIL;
	NIL->prev = NIL->prev->prev;
	free(list);
}

typedef struct s_act
{
	char s[100];
	int key;
}	t_act;

int main()
{
	int n;
	scanf("%d", &n);
	t_act act[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", act[i].s);
		if (strncmp(act[i].s, "delete", strlen("delete") + 1) == 0 || strncmp(act[i].s, "insert", strlen("insert") + 1) == 0)
			scanf("%d", &act[i].key);
		else
			act[i].key = 0;
	}
	list_init();
	for (int i = 0; i < n; i++)
	{
		if (strncmp("insert", act[i].s, strlen("insert") + 1) == 0) list_insert(act[i].key);
		else if (strncmp("delete", act[i].s, strlen("delete") + 1) == 0) list_delete(act[i].key);
		else if (strncmp("deleteLast", act[i].s, strlen("deleteLast") + 1) == 0) deleteLast();
		else if (strncmp("deleteFirst", act[i].s, strlen("deleteFirst") + 1) == 0) deleteFirst();
	}
	if (NIL == NULL)
		return (0);

	t_dll *list = NIL->next;

	while (list != NIL)
	{
		printf("%d ", list->key);
		list = list->next;
	}

	t_dll *tmp;

	list = NIL->next;
	while (list != NIL)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
	free(NIL);
}
