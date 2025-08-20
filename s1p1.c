#include<stdio.h>
int main(){
    int x=4;
    int *p= &x; 
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("address of x is :%p\n",p); 
    printf("value of x through pointer is :%d\n",*p); 
    
}