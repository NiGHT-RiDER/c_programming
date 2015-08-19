/*
 * description :linked list of ints 
 * author : bogdanovic stefan
 * note : the code was made to learn structures 
 */

/*includes*/
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

/* structures */
typedef struct node 
{
    int elt; 
    struct node *next;
}
node ; 

/*global variables */
int size  = 0; 
struct node *head ; 

/* main */
int main()
{
    int zizi = insert(5);
    zizi = insert(6);
    zizi = insert(8);
    tostring();
}

int getsize()
{
    return size ; 
}

// TODO
int exists(int elt)
{
    return -1 ;
}

//TODO O(n)
int delete(int elt)
{
    struct node *current  ; 
    for(current = head ; current != NULL ; current = current->next)
    {
        if(current->elt == elt)
        {
            
        }
    }
    return -1;
}

// TODO O(1)
int insert(int elt)
{
    if(getsize() == 0)
    {
        head = nalloc();
        head->elt = elt;
        head->next = NULL ;
    } 
    else 
    {
        struct node *new = nalloc();
        new->elt = elt ;
        new->next = head;
        head = new ; 
    }
    size++; 
    return elt ;
}

struct node *nalloc()
{
    return (struct node *) malloc (sizeof(struct node));
}

void tostring()
{
    struct node *p ; 
    int i ;  

    for( p = head ; p != NULL ;  p = p->next )
    {
        printf("ELEMENT : %d \nNEXT : %p\n", p->elt ,  p->next);
    }
}
