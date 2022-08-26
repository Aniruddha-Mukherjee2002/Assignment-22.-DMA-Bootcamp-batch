#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,max,min,i,n,j=0;
printf("Enter size : ");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
    printf("Memory allocation falied\n");
    return 0;
}
printf("Enter %d values : ",n);
for(i=0;i<n;i++)
scanf("%d",p+i);
max=*(p+j);
min=*(p+j);
for(i=0;i<n;i++)
{
    if(*(p+i)>max)
        max=*(p+i);
}
printf("Maximum value in this array : %d ",max);
for(i=0;i<n;i++)
{
    if(*(p+i)<min)
        min=*(p+i);
}
printf("Minmum value in this array is : %d",min);
free(p);
return 0;
}
