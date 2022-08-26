#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,size;
printf("Enter size : ");
scanf("%d",&size);
p=(int*)calloc(size,sizeof(int));
if(p==NULL)
{
    printf("Memory allocation is faled.");
    return 0;
}
printf("Enter %d numbers: ",size);
for(int i=0;i<size;i++)
{
    scanf("%d",p+i);
}
printf("Elements are :");
for(int i=0;i<size;i++)
{
    printf("%d ",*(p+i));
}
free(p);
return 0;
}
