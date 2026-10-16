#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int V[N];
    for(int i=0;i<N;i++){
        scanf("%d",&V[i]);

    }
    int pos=0,neg=0;
    for(int i=0;i<N;i++){
        
        if(V[i]>0){
            pos=pos+V[i];
        }
        else{
            neg=neg+V[i];
        }

    }
    printf("%d %d",pos,neg);
    return 0;
}