#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = NULL;//ptr is initialized to NULL, hence its dereference does not print anything on screen.
    printf("%d", *ptr);
    return 0;
}