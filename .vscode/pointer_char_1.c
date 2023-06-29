#include<stdio.h>

    int main(){
    int a='Q';
    int *b=&a;
    a++;
    printf("%c\n",a);
    return 0;
}