#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("I will go to Dubai\n");
        if(tk>=10000){
            printf("I will go to Dubai and buy a car\n");
        }
        else{
            printf("I will go to Dubai but I will not buy a car\n");
        }
    }
    else{
        printf("I will not go to Dubai\n");
    }
}