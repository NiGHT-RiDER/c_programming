#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv)
{

    char c ;
    double fact = 0 , res = 0 , toDisplay;
    int count = 0 ;
    while(c != EOF)
    {
        c = getchar();
        if( c >= '0' && c <= '9' ) {
            count++;
            c -= '0';
            fact = (count == 2) ? (fact * 10) : fact ;
            fact += c;
        } else if(c == '\n' && count != 0 && count < 3){
            count = 0;
            toDisplay = fact;
            for( res = 1 ; fact >= 1 ; fact-- )
                res *= fact;
            printf("la factorielle de %f est %f\n" , toDisplay , res );
        } else {
            count = 0;
            fact = 0;
            while(c != '\n') c = getchar();
        }
    }

    return 0;
}
