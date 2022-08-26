#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,n,i,sum=0;
printf("Enter size of the array :");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
    printf("memory allocation failed.\n");
    return 0;
}
printf("Enter %d values: ",n);
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
   sum=sum+*(p+i);
}
printf("Average  is %d ",sum/n);
}
