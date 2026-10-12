#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int max=INT_MIN;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int value;
        scanf("%d",&value);
        if(value>max){
            max=value;
        }
    }
    printf("%d\n",max);
    return 0;
}