# 0x13. C - More  singly linked lists

## Mandatory

- 0-print_listint.c
  - a function that prints all the elements of a listint_t list.
  - returns the number of elements in the list.

- 1-listint_len.c
  - a function that returns the number of elements in a linked list_t list

- 2-add_nodeint.c
  - a function that adds a new node at the beginning of a listint_t list.
  - returns the address of the new node.

- 3-add_nodeint_end.c
  - a function that adds a new node at the end of a listint_t list.
  - returns the address of the new node.

- 4-free_listint.c
  - a function that frees a listint_t list.
  - this function takes a double pointer to the head of the list as an argument.

- 5-free_listint2.c
  - a function that frees a listint_t list.
  - this function takes a double pointer to the head of the list as an argument.

- 6-pop_listint.c
  - a function that deletes the head node of a listint_t linked list.
  - it takes one arguments, a double pointer to the head of the linked list.
  - it returns the data (n) of the head node, 0 if the list is empty.

- 7-get_nodeint.c
  - a function that returns the nth node of a listint_t linked list.
  - it takes two arguments, a pointer to the head of the linked list and the index or nth node from the list.
  -it returns a pointer to the nth node, or NULL if the node doesn't exist.

- 8-sum_listint.c
  - a function that calculates the sum of all the data(n) of a listint_t linked list.
  - it takes one argument, a pointer to head of the linked list.
  - it returns the sum of the all the data(n) of the list.

- 9-insert_nodeint.c
  - a function that inserts a new node at a given position.
  - it takes three arguments, a double pointer to the head of the linked list, the index of the list where the new node should be added and the data(n) of the new node.
  - it returns the address of the new node, or NULL if it fails.

- 10-delete_nodeint.c
  - a function that deletes the node at index of a listint_t linked list.
  - it takes two arguments, a double pointer to the head of the linked list and the index of the node to be deleted.
  - it returns 1 if it is successful, or -1 if it failed.

- 100-reverse_listint.c
  - a function that reverses a listint_t linked list using only one loop, only two variables, and without using malloc, free or arrays.
  - it takes one argument, a double pointer to the linked list.
  - it returns a pointer to the reversed linked list, or NULL if it fails.

- 101-print_listint_safe.c
  - a function that prints a listint_t linked list safely, avoiding infinite loops.
  - it takes one argument, a pointer to the head of the linked list.
  - it returns number of nodes printed, 98 otherwise.

- 102-free_listint_safe.c
  - a function that frees a listint_t linked list safely, avoiding infinite loops.
  - it takes one argument, a double pointer to the head of the linked list.
  - it returns size of the list freed.
