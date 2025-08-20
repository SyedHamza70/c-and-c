#include<stdio.h>
//pass by value
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
// pass by refrence
void swapping(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    a=4;
    b=5;
    printf("value of a and b before swap is %d and %d\n",a,b);
    swap(a,b);
    printf("value of a and b after swap is %d and %d\n",a,b);
    int x,y;
    x =10;
    y=5;
    printf("the value of a annd b before swapping is %d and %d\n",x,y);
    swapping(&x,&y);
    printf("the value of a annd b after swapping is %d and %d\n",x,y);
}
    