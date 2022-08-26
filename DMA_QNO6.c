#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,max,i,n,j=0;
printf("Enter size : ");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
    printf("Memory allocation failed\n");
    return 0;
}
printf("Enter %d numbers",n);
for(i=0;i<n;i++)
{
    scanf("%d",p+i);
}
max=*(p+j);
for(i=1;i<n;i++)
{
    if(*(p+i)>max)
    {
       max=*(p+i);
    }
}
printf("maximum number is %d", max);
free(p);
return 0;
}
