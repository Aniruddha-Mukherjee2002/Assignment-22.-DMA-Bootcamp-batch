//program to input and printf text uding Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main(){
char *p,ch;
int i=0,j=1;
p=(char*)malloc(sizeof(char));
if(p==NULL)
{
    printf("Memory allocation failed\n");
    return 0;
}
printf("Enter a string :");
while(ch!='\n')
{
    ch=getc(stdin);
    j++;
    p=(char*)realloc(p,j*sizeof(char));
    p[i]=ch;
    i++;
}
p[i]='\0';
printf("The entered string is %s ",p);
free(p);
}
