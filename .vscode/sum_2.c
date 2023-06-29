#include<stdio.h>
int sum(){
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}

    int main(){
    int store=sum(12,23);
    printf("%d",store);
    return 0;
}