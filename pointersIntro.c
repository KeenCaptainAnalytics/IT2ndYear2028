// Online C compiler to run C program online
#include <stdio.h>

void add(int *addr){ // addr is a pointer that stores the memory address passed into the function
    printf("%p\n" , addr);  
    *addr = *addr + 50 ;  // here *addr is the actual value of the data
    printf("%d\n", *addr);
}
int main() {
   int a= 10;
   printf("%d\n", a);
   add(&a);  //passing the address of the data i.e. a into the add function
    printf("%d\n", a);
   return 0;
}
