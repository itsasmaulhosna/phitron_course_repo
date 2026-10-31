#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int fre[6]={0};
    // int count0 =0,count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){
int val=a[i];
fre[val]++;
    //     if(a[i]==0){
    //         count0++;
    //     }
    //    else if(a[i]==1){
    //         count1++;
    //     }
    //     else if(a[i]==2){
    //         count2++;
    //     }
    //     else if(a[i]==3){
    //         count3++;
    //     }
    }
    for(int i=0;i<6;i++){
        printf("%d -> %d\n",i,fre[i]);
    }
    // printf("%d -> %d\n",0,count0);
    // printf("%d -> %d\n",1,count1);
    // printf("%d -> %d\n",2,count2);
    // printf("%d -> %d\n",3,count3);
    return 0;
}