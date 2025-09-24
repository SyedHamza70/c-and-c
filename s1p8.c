#include<stdio.h>
int strlength(char *s){
    int count =0;
    while(*s != '\0'){
         count=count+1;  //count++
         s++;
    }
    return count;
}
int main(){
    char str[]="hello world";
     int len=strlength(str);
    printf("length =%d\n",len);
}