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
if(c==1){
    printf("Column matrix\n");
}
else{
    printf("Not a column matrix\n");
}
// if(r==1){
//     printf("Row matrix\n");
// }
// else{
//     printf("Not a row matrix\n");
// }
return 0;
}