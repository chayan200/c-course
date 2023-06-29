#include<stdio.h>

    int main(){
     int a = 50;
 int *ptr = &a;
 printf("%d\n",*ptr);
 printf("%d\n",ptr);
 int *q = ptr;
 (*q)++;
 printf("%d",a);
    return 0;
}