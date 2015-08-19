#include<stdio.h>

int main ()
{
    int c ;
    int count ; 
    while((c = getchar()) != EOF ) 
    {
        if(c == '\n' || c == '\t' || c == '\n' )
            printf("this is a special character ! \n"); 
    }




}
