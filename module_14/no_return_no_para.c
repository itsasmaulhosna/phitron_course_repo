#include<stdio.h>
// return type function_name(parameter_list){
//     // function body
//     return value;
// }
void sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    // printf("Sum of %d and %d is: ",a,b);
    int result=a+b;
    printf("%d\n",result);
    
}
int main(){
    
   sum();
  return 0;
}
