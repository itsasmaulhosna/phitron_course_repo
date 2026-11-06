#include<stdio.h>
void fun(int a){
    a=20;
 printf("fun function address id:%p\n",&a);
}
int main(){
    int x=10;
    fun(x);
    printf("%d\n",x);
    printf("Main function address id:%p\n",&x);
    return 0;
}