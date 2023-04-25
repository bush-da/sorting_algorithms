#include "sort.h"


/**
 * swap_nodes - swap to nodes by there address not value
 * @head: head node of doubly linked list
 * @node1: the first node
 * @node2: the second node
 * Return: void
 */

void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;

}
/**
 * insertion_sort_list - sort doubly linked list elements using insertion sort
 * @list: doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *fast, *slow;


	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	fast = (*list)->next;
	while (fast)
	{
		slow = fast->prev;
		while (slow != NULL && slow->n > fast->n)
		{
			swap_nodes(list, &slow, fast);
			print_list((const listint_t *)*list);
		}
		fast = fast->next;
	}

}
