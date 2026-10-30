#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    int result2=0,result3=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
            if(A[i]%2==0){
                result2++;
            }
            else if(A[i]%3==0){
                result3++;
            }
    }
    printf("%d %d",result2,result3);

    return 0;
}