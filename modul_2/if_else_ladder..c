#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=100){
        printf("I will buy a laptop\n");
    }
    else if(tk>=50){
        printf("I will buy a mobile\n");
    }
    else{
        printf("I will not buy a laptop\n");
    }
}