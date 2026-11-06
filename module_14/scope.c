#include<stdio.h>
int x=10;
int sum(){
    int y=20;
    printf("%d\n",y);
}
int main(){
    printf("%d\n",x);
    sum();
    int i=0;
    for(i=0;i<5;i++){
        
        printf("%d\n",i);
    }
    printf("%d\n",i);
    return 0;
}