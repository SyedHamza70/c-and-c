#include<stdio.h>
void increment(int *p){
    *p = *p+1;
    
}
int main(){
    int a =4;
    printf("before increment:%d\n",a);
    increment(&a);
    printf("after increment:%d",a);

}