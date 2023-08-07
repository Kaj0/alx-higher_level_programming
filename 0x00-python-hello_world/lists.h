#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
  * struct listint_s - function is a singly linked list
  * @n: represents an integer
  * @next: this is a pointer to the next node
  *
  * Description: This is a singly linked list node structure
  */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
