#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 *@head: head of the list
 * Return: 1 if palindrome, else 0;.
 */

int is_palindrome(listint_t **head)
{
listint_t *current = *head;
int order = 0;
int i = 0;

while (current->next != NULL)
{
order++;
current = current->next;
}

int results[order + 1];
current = *head;

while (current != NULL)
{
results[i] = current->n;
if (current->next != NULL)
{
i++;
}
current = current->next;
}

for (; i >= 0;  i--)
{
if (results[i] != results[order - i])
{
return (0);
}
}

return (1);

}
