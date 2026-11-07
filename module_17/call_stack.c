#include<stdio.h>
void mello(){
    printf("Mello World\n");
}
void gello(){
    printf("Gello World\n");
    mello();
}
void hello(){
    printf("Hello World\n");
    gello();
}
int main(){
    printf("Hello World\n");
    hello();
    return 0;
}