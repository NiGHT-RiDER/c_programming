#include<stdio.h>

void printboard(char board[3][3]);
void fillboard(char board [3][3]);
char winner(char board[3][3]);

/* without ai for now */
int main (int argc , char **argv)
{
    char board[3][3] , c ;
    int x , i ; 
    fillboard(board);
    printf("Simple Tic Tac Toe game WITHOUT AI\n");
    for(i = 1 ; i <= 9 ; i++)
    {
        printboard(board);
        printf("enter the number :");
        scanf("%d" , &x);    
    } 

}

void fillboard(char board [3][3])
{
    char *ptr = *board;
    printf("this is a cher %c\n" , *(ptr + 1));

}

void printboard(char board[3][3])
{
    int i , j , k;
    for(i = 0 , k = 1 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            char a = (board[i][j] != 'X' && board[i][j] != 'O') ? ('0' + k ) : (board[i][j] == 'X' ? 'X' : 'O'); 
            printf("|%c|" , a);
            k++;
        }
        printf("\n");
    }
}

char winner(char board [3][3])
{
    int i; 
    /*checks all lines and columns if there is a winner */
    for(i = 0 ; i < 3 ; i++)
    {
        if(board[0][i] == board [1][i] && board [1][i] == board [2][i])
            return board [0][i];
        if(board[i][0] == board [i][1] && board [i][1] == board [i][2])
            return board [i][0];
    }
    /*checks the diagonal*/
    if(board[0][0] == board [1][1] && board [1][1] == board [2][2])
        return board[0][0];
    if(board[2][0] == board [1][1] && board [1][1] == board [0][2])
        return board[0][2];

    return ' ';
}
