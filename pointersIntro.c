// Online C compiler to run C program online
#include <stdio.h>

void add(int *addr){
    printf("%p\n" , addr);
    *addr = *addr + 50 ;
    printf("%d\n", *addr);
}
int main() {
   int a= 10;
   printf("%d\n", a);
   add(&a);
    printf("%d\n", a);
   return 0;
}
