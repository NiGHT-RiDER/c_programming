/*
 *   author : bogdanovic stefan 
 *
 *   strcat reimplementation 
 *   with pointers
 */

#include<stdio.h>
#include<string.h>

void my_strcat(char *t , char *s);

int main ()
{

    char str1 [100] = "zizi" ;
    char str2 [100] = "tout";
    char str3 [100] = "dumitrela" ;

    printf("String 1 : %s \n" , str1);
    
    my_strcat( str1 , str2);
    my_strcat(str1 , str3);

    printf("String 2 : %s \n" , str2);
    printf("cat result : %s \n" , str1);   
    
    return 0 ;
}

void my_strcat(char *s , char *t)
{
    /*
     * '*++s' est utilise ici pour incrementer le pointeur avant de faire 
     *  la verification de '\0' et ainsi eviter que le pointeur ne se retrouve passe ce point la 
     *  voir photo iphone 18 juillet pour explication detaillé 
     */
    while(*++s);
    while((*s++ = *t++));
}
