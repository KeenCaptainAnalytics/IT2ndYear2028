// Online C compiler to run C program online
#include <stdio.h>

void print(char ch[]){
    for(int i=0 ;i <2 ;i++){
        printf("%c ", ch[i]);
    }
    printf("\n");
}
void helper(char ans[], int in){
    if(in ==2){
        print(ans);
        return ;
    }
    ans[in] = 'A';
    helper(ans , in+1);
    ans[in] = 'B';
    helper(ans, in+1);
    ans[in] = 'C';
    helper(ans, in+1);
}
int main() {
    char ans [2];
    helper(ans, 0);
    return 0;
}
