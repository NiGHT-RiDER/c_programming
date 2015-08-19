#include<stdio.h>

int main()
{
    int c  ; 
    while( ( c = getchar() ) != EOF)
    {
        if(c == '\n' || c == ' ' || c == '\n') 
            printf("\n");
        else
            printf("%c" , c);
    }



}
