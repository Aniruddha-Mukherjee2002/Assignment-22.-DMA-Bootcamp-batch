#include<stdio.h>
#include<stdlib.h>
int* dangling(void);
int main() {
int *i=dangling();
i=1;
printf("%d",i);
return 0;
}
int* dangling(){
int *p;
p=(int*)malloc(sizeof(int));
if(p==NULL)
{
    printf("Memory allocation failed\n");
    return 0;
}
*p=10;
p=*p-1;
return &p;
}
