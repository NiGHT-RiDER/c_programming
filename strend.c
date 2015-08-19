/*
 *    description: strend reimplementation with pointers
 *    author : bogdanovic stefan
 *    email : bogdanovicstefan.sb@gmail.com
 */

#include<stdio.h>
#define STRBUFFER 1000

int my_strend(char *s , char *t);
int my_strlen(char *s);


int main ()
{
    char message [STRBUFFER] = "ceci est un message qui a pour but de ne rien faire si ce n'est trouver cela.";    
    char good [STRBUFFER] = "cela." ; 
    char bad [STRBUFFER] = "cela" ;

    printf("the string is %s\n" ,  (my_strend(message, bad) == 0) ? "THERE" : "NOT THERE"); 
    printf("the string is %s\n" ,  (my_strend(message, good) == 0) ? "THERE" : "NOT THERE"); 

    return 0; 
}

int my_strlen(char *s) 
{
    int i ; 
    for(i=0;*s++;i++);
    return i;
} 

int my_strend(char *s , char *t)
{
    //int ls ;
    //ls = my_strlen(s) - my_strlen(t);
    /* move pointer to the nth letter so we can start comparing it to t*/
    //for( ; ls > 0 ; *s++ && ls--) ;    

    s += my_strlen(s) - my_strlen(t) ;    
    for( ; *s == *t ; s++ , t++ )    // if the strings are the same it'll loop and increment the pointers
        if(*s == '\0')               // and if we get to the end of it 
            return 0;                // then we can return a value saying that the ends are the same 

    return -1; 
}
