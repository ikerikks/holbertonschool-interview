#include "lists.h"
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
  listint_t *new_node = malloc(sizeof(listint_t));

  if (new_node == NULL)
  {
    return (NULL);
  }
  new_node->n = number;
  if (*head == NULL)
  {
    *head = new_node;
    return (new_node);
  }

  listint_t *current = *head;
  listint_t *last = *head;

  if (number < (*head)->n)
  {
    *head = new_node;
    new_node->next = last;
    return new_node;
  }

  while (current->next != NULL)
  {
    /* code */
    if (number < current->next->n)
    {
      listint_t *next = current->next;
      current->next = new_node;
      new_node->next = next;
      return new_node;
    }
    current = current->next;
  }
  return (NULL);
}