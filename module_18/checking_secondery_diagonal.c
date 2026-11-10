#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
int flag=1;
    if(r==c){//square matrix

        for (int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i+j==r-1){
                    // printf("%d ",arr[i][j]);
                }
                else{
                    if(arr[i][j]!=0){
                        flag=0;
                        printf("Not a primary diagonal matrix\n");
                    }
                }
            }
        }
        if(flag==1){
            printf("Primary diagonal matrix\n");
        }
    }
    else{
        printf("Not a square matrix\n");
    }

    return 0;
}