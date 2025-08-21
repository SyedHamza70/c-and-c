#include<stdio.h>
int max(int *a,int*b,int *c){
 if(*a > *b && *a > *c)
    return *a;
 
else if(*b > *a && * b > *c)
    return *b;

else
 return *c;
   
 }

int main(){
    int x,y,z;
     x=3;
     y=4;
     z=5;
     max(&x,&y,&z);
    int n = max(&x,&y,&z);
     printf(" the maximum is:%d",n);

}