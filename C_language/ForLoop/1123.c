#include<stdio.h>    
int main()    
{    
    int a=1,b=1,c,i,number;    
    printf("Enter the number :-> ");    
    scanf("%d",&number);    
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=2;i<number;++i)   
    {    
        c=a+b;    
        printf("%d\n",c);    
        a=b;    
        b=c;    
    }  
    return 0;  
}    