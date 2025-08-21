#include<stdio.h>
int main(){
    int arr[5]={5,4,5,7,};
    int *ptr;
    ptr = arr; // pointer to the first element of the array
    printf("acessing the array using pointer\n");
    for(int i=0;i<4;i++){
        printf("%d",*ptr);
        ptr++; // move to the next element
    }
    printf("\n");
}