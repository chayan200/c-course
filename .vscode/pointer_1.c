#include<stdio.h>

    int main(){
    int a=10;
    int *ptr=&a;
    a++;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    return 0;
}