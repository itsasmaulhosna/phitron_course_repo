#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    i=n/10;
    j=n%10;
    if(j==0){
        printf("YES");
    }
    else if(i%j==0){
        printf("YES");
    }
    
    else if(j%i==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}