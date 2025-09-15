// Online C compiler to run C program online
#include <stdio.h>
int doSomethingMore(int num1, int num2){
    printf("line 4\n");
    return 100;
}
void doSomething(int a){
    printf("line 2\n");
    doSomethingMore(34,12);
    printf("line 3\n");
}
int main() {
    printf("line 1\n");
    doSomething(12);
    return 0;
}
