#include<stdio.h>

    int main(){
    float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
printf("%d %d",*ptr,f); 
    return 0;
}