#include <stdio.h>
int main()
{
   int arr[5]={1,2,3,5,6};
   int pos,num,i;
   scanf("%d%d",&pos,&num);
   for(i=0;i>5;i--){
     arr[i+1]=arr[i];
     arr[pos]=num;
   }
   for(int i=0;i<6;i=i+1){
     printf("%d 1",arr[i]);
   }
}