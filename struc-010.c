/*How to access struct members*/
#include <stdio.h>
int main(void)
{
/*

Access to members of a struct
2 Ways: 
    member access op . //gets the member
    member access op -> // address of the struct that gets the members

    struct card {
        int pips;
        char suit;
    } c1, c2, c3;

    c1.pips = 3;
    c1.suit = 'h'; 

2nd method
    struct card * ptr_to_card;
    ptr_to_card = 8c1;

    ptr_to_card -> pips = 5;
    ptr_to_card -> suit = 's';






*/

    return 0;
}