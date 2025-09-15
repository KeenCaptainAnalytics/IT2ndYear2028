// Online C compiler to run C program online
#include <stdio.h>

void sum(int *arr){
    
}
void sum2(int arr[]){
    
}
int main() {
   int arr[6] = {11,12,13,14,15,17};
   sum(arr);
//   printf("%d\n", arr[0]);
//   printf("%p\n",arr);
//   printf("%d\n", (*arr+2));
    printf("%p\n", &(arr[0]));
   printf("%p\n", &(arr[1]));
   printf("%p\n", &(arr[2]));
   printf("%p\n", &(arr[3]));
   printf("%p\n", &(arr[4]));
   printf("%p\n", &(arr[5]));
   printf("%p\n", &(arr[6]));
   printf("%p\n", &(arr[7]));
   return 0;
}
