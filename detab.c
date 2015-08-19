#include<stdio.h>
#define TABLENGTH 5
#define MAXINPUT  1000 


int main ()
{
    int i , c ;
    char ligne[MAXINPUT];
    char detab[MAXINPUT];

    i = 0 ; 
    while((c = getchar()) != EOF)
    {
        ligne[i] = c ; 
        i++ ; 
    }    

    // detab time ... 
    int li , di; 
    li = 0 , di = 0 ; 
    while(li < i)
    {
        if(ligne[li] == '\t')
        {
            int z;
            for(z = 0 ; z < TABLENGTH ; z++)
                detab[di + z] = ' ';
            di += TABLENGTH ; 
        } 
        else 
        {
            detab[di] = ligne[li];
            di++;
        }    
        li++;
    }

    printf("%s" , detab);
}

