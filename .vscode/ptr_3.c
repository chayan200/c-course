#include<stdio.h>

    int main(){
    int a = 7;
int b = 17;
int *c = &b;
a = *c;
*c = *c + 1;
printf("%d %d\n",a,b);
    return 0;
}