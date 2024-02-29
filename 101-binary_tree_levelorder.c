#include "binary_trees.h"

level_order_queue_t *create_q_node(binary_tree_t *node);
void queue_push(binary_tree_t *node, level_order_queue_t *head,
		level_order_queue_t **tail, void (*func)(int));
void free_queue(level_order_queue_t *head);
void pop_f_queue(level_order_queue_t **head);

/**
 * binary_tree_levelorder - print a binary tree in level-order traversal
 * @tree: the tree to be printed
 * @func: the function used to print nodes
 * Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	level_order_queue_t *head, *tail;

	if (tree == NULL || func == NULL)
		return;
	head = tail = create_q_node((binary_tree_t *)tree);
	if (head == NULL)
		return;
	while (head != NULL)
	{
		queue_push(head->node, head, &tail, func);
		pop_f_queue(&head);
	}
}

/**
 * create_q_node - creates level_order_queue_t list
 * @node: the node to be added
 * Return: the new node
*/
level_order_queue_t *create_q_node(binary_tree_t *node)
{
	level_order_queue_t *new;

	new = malloc(sizeof(level_order_queue_t));
	if (new == NULL)
		return (NULL);

	new->node = node;
	new->next = NULL;

	return (new);
}

/**
 * queue_push - Runs a function on a given binary tree node and
 * pushes its subtree into a levelorder_queue_t
 * @node: the node to be pushed
 * @head: the head of level_order_queue_t list
 * @tail: the tail of level_order_queue_t list
 * @func: the function to print nodes
 * Return: void
*/
void queue_push(binary_tree_t *node, level_order_queue_t *head,
		level_order_queue_t **tail, void (*func)(int))
{
	level_order_queue_t *new;

	func(node->n);
	if (node->left != NULL)
	{
		new = create_q_node(node->left);
		if (new == NULL)
		{
			free_queue(head);
			exit(1);
		}
		(*tail)->next = new;
		*tail = new;
	}
	if (node->right != NULL)
	{
		new = create_q_node(node->right);
		if (new == NULL)
		{
			free_queue(head);
			exit(1);
		}
		(*tail)->next = new;
		*tail = new;
	}
}

/**
 * free_queue - free level_order_queue_t list
 * @head: the head of the list
 * Return:void
*/
void free_queue(level_order_queue_t *head)
{
	level_order_queue_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

/**
 * pop_f_queue - pops a node from level_order_queue_t list
 * @head: the node to be poped
 * Return: void
*/
void pop_f_queue(level_order_queue_t **head)
{
	level_order_queue_t *tmp;

	tmp = (*head)->next;
	free(*head);
	*head = tmp;
}
