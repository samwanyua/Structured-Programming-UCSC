/*Details of list processing*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
/*
Further list processing
 count -> how many elements are in the list
 concat -> takes two lists and link them together
 insert -> put an element into a list 
 delete -> removes an element from a list

 recursion to count
    if( h == NULL)
        return 0;
    else
        return(1+ count(h->next));

    concat
    void concat (list* h1, list* h2)
    {
        assert(h1 != NULL); //assert aborts if condition is not true
        if (h1 -> next == NULL)
            {
                h1 -> next = h2;
            }
            else
            {
                concat(h1-> next,h2);
            }
    }
//h1 must point at a non-empty list

insert
    void insert (
        list* p1, //first
        list* p2, //last
        list* q   //insert

    )

    assert(p1-> next == p2);
    p1 -> next = q;
    q -> next = p2;


    






*/




    return 0;
}