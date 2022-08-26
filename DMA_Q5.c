#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,i,size,sum=0;
printf("Enter size  : ");
scanf("%d",&size);
p=(int*)malloc(size*sizeof(int));
if(p==NULL)
{
    printf("Memory allocation failed !\n");
    return 0;
}
printf("Enter %d numbers :",size);
for(i=0;i<size;i++)
{
    scanf("%d",p+i);
}
for(i=0;i<size;i++)
{
    sum=sum+*(p+i);
}
printf("Sum of %d numbers is : %d  ",size,sum);
free(p);
return 0;
}

