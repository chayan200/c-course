#include<stdio.h>

    int main(){
    int a = 50;
 int *ptr = &a;
 *ptr++;
 printf("%d",a);
    return 0;
}