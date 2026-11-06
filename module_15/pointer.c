#include<stdio.h>
int main(){
    int x=10;
    printf("%d\n",x);
    printf("%p\n",&x);
    int *ptr=&x;
    *ptr=20;
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    return 0;
}