/*
    header file 
    linkedlist for ints 
*/

/* return the number of element in the data strucutr*/
int getsize();
/*returns 1 if the number is in the structure otherwise 0*/
int exists(int);
/*removes a node and return it's value otherwise return -1 */
int delete(int);
/*inserts a node if it's not already here*/
int insert(int);
/*allocates the memory for a node*/
struct node *nalloc();
/*displays all the node*/
void tostring();

