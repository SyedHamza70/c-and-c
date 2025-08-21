#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a, b, result;

    printf("enter the no:");
    scanf("%d",&a);
    printf("enter the no:");
    scanf("%d",&b);

    add(&a, &b);
    int c = add(&a, &b);

    printf("Sum = %d\n",c);

    return 0;
}
