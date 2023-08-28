#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent:  pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  if (new_node == NULL)
  {
    return NULL;
  }

  if (parent != NULL) {
    new_node->parent = parent;
  }

  new_node->n = value;

  return new_node;

}