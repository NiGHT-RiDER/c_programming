#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{

    // initialisation du tableau    
    int tab[50] , i;
    for(i = 0 ; i < 50 ; i++)
        tab[i] = 0 ; 

    // debut du comptage de la longueur des mots 
    int c , status , count ;  
    status = IN ;
    count = 0 ;  
    while((c= getchar()) != EOF)
    {
        if(c == '\n' || c == ' ' || c == '\n') 
        {
            status = OUT ;
            tab[count] = tab[count] + 1;
            count = 0 ;  
        }
        else
            count++;
    }
    
    // affichage des stats
    for(i = 1 ; i<50 ; i++)
        printf("il y a %d nombres de mots de longueur %d \n" , tab[i] , i);
}
