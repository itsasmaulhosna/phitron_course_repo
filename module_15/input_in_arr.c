#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    *arr=100;
    *(arr+1)=200;
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    // printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);
    // printf("%p\n",&arr[4]);
    return 0;
}