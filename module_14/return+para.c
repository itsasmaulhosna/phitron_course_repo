#include<stdio.h>
// return type function_name(parameter_list){
//     // function body
//     return value;
// }
int sum(int a,int b){
    printf("Sum of %d and %d is: ",a,b);
    int result=a+b;
    return result;
}
int main(){
  int val=  sum(10,20);
  printf("%d\n",val);
}
