#include<stdio.h>
int main(){
    char S[1000001];
    scanf("%s",&S);
    int count =0;
    int i=0;
    while(S[i]!='\0'){
        if(S[i]!='a' && S[i]!= 'e' && S[i]!= 'i' && S[i]!='o' && S[i]!= 'u'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}