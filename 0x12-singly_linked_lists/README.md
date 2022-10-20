0. Write a function that prints all the elements of a list_t list.
1. Write a function that returns the number of elements in a linked list_t list.
2. Write a function that adds a new node at the beginning of a list_t list.
3. Write a function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup
4. Write a function that frees a list_t list.

Prototype: void free_list(list_t *head);
