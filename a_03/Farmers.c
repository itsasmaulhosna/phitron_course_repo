#include<stdio.h>
int main(){
    int T,M1,M2,D;
scanf("%d",&T);
for(int i=0;i<T;i++){
    scanf("%d %d %d",&M1,&M2,&D);
    int newdays,result;
    int total=(M1+M2);
    newdays=(M1*D)/total;
    result=D-newdays;
    printf("%d\n",result);
}


    return 0;
}