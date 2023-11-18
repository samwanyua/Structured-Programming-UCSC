/*Intro to ADT List*/

#include <stdio.h>
int main(void)
{
/* Chapter 10
A struct's ADT List = is a self-referential structs

List has a head which points to an element which points to an element then has a tail

    struct list{
        int data;
        struct list *next;
    }
    typedef struct list list;
        list *head;
        list *tail = 0; //NULL

    Create a list will use malloc in stdlib.h

    head = malloc(sizeof(list));

    







*/

    return 0;
}