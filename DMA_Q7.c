#include<stdio.h>
#include<stdlib.h>
int leak(void);

int main() {
leak();
int fact=1;
printf("Enter a number");
int x;
scanf("%d",&x);
for(int i=1;i<x;i++)
    fact=fact*i;
printf("%d",fact);
return 0;
}
int leak(){
int i;
int *p;
p=(int*)malloc(sizeof(int));
if(p==NULL)
{
    printf("memory allocation failed.");
    return 0;
}
p=&i;
*p=10;
*p=*p+*p;
}
