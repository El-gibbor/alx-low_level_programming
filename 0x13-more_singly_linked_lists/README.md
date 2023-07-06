# 0x13-more_singly_linked_lists  
This project builds upon our [previous](https://github.com/El-gibbor/alx-low_level_programming/tree/master/0x12-singly_linked_lists) exploration of C - singly linked lists, which covered basic operations like creating a linked list, inserting nodes at the begining and end, returning the length of nodes in a list and printing the list. This time we are delving deeper to further explore and implement some more complex operations, such as deleting the head node and a node at a given index, as well as summing all the elements/data in the linked list.  
## Operations  
### Deletion, Insertion, Sum, Reverse, Retrieve, etc     
* `int pop_listint(listint_t **head);` Implement a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
* `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`  a function that returns the `nth` node of a listint_t linked list. where index is the index of the node, starting at 0
if the node does not exist, return `NULL`
* `int sum_listint(listint_t *head);` Implement a function that returns the sum of all the data (n) of a listint_t linked list.
* `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);` Implement a function that inserts a new node at a given position. where `idx` is the index of the list where the new node should be added. Index starts at 0 returns the address of the new node, or `NULL` if it failed. if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`.
* `int delete_nodeint_at_index(listint_t **head, unsigned int index);` function that deletes the node at index index of a listint_t linked list. where index is the index of the node that should be deleted. Index starts at 0 returns `1` if it succeeded, `-1` if it failed.
* `listint_t *reverse_listint(listint_t **head);` Implement a function that reverses a listint_t linked list. returns a pointer to the first node of the reversed list.
