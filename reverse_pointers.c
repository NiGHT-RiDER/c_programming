/*
 *  author : bogdanovic stefan
 *
 *  description : reverse a string but this time ...
 *  with pointers 
 *
 */

#include<stdio.h>
#include<string.h>
#define STR_BUFFER 100

void reverse(char *s);

int main ()
{
    char message [STR_BUFFER] = "izi";

    printf("original message : %s\n" , message);
    reverse(message);
    printf("reversed message : %s\n" , message);
}

void reverse(char *s)
{
    char c , *p ; 
    p = s + strlen(s) - 1 ; 
    for(; p > s ; c = *s , *s++ = *p , *p-- = c );

}
