#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char *directory;
	struct node *next;
} Node;

Node *build_path_list()
{
	Node *head = NULL;
	Node *tail = NULL;
	char *path = getenv("PATH");
	char *directory = strtok(path, ":");
	while (directory != NULL)
	{
		Node *new_node = malloc(sizeof(Node));
		new_node->directory = directory;
		new_node->next = NULL;
		if (head == NULL)
		{
			head = new_node;
			tail = new_node;
		}
		else
		{
			tail->next = new_node;
			tail = new_node;
		}
		directory = strtok(NULL, ":");
	}
	return head;
}

int main()
{
	Node *head = build_path_list();
	Node *current = head;
	while (current != NULL)
	{
		printf("%s\n", current->directory);
		current = current->next;
	}
	return 0;
}
