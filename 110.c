#include<stdio.h>

int main()
{
    int c ; 
    while((c = getchar()) != EOF ) 
    {
        if(c == '\t')
            print('\t');
        if(c == '\\')
            puts('\');
        if(c == '\b') 
            puts('\b');
        printf("%c" , c);
    }
}
