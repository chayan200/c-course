#include<stdio.h>

    int main(){
    float a=1.2;
    float *b=&a;
    a++;
    printf("%d\n",a);
    return 0;
}