#include<stdio.h>

void hello(int i){
    if(i==6){
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
    // recursion function will call itself again and again until the program is terminated by the user or the system. This will cause a stack overflow error.
}
int main(){
    int i=1;
    hello(i);
    return 0;
}