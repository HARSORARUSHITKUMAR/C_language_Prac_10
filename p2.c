#include<stdio.h>
int main()
{
    printf("enter the value: ");
    revser();
    return 0;
}

void revser()
{
    char c;
    
    c=getchar();
    if(c!=10){
     revser();
    putchar(c);
    }
}
