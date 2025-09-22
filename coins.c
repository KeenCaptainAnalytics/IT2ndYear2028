// Online C compiler to run C program online
#include <stdio.h>


void helper(int coins [], int target , int currsum, char ans[], int in){
    if(currsum == target){
        ans[in]='\0';
        printf("%s\n", ans);
        return;
    }
    if(currsum > target){
        return;
    }
    ans[in] = '1';
    helper(coins, target , currsum + coins[0] ,ans, in+1 );
    ans[in] = '2';
    helper(coins, target , currsum+coins[1] , ans, in+1);
    ans[in] = '3';
    helper(coins , target , currsum+coins[2] ,ans , in+1);
}
   
int main() {
    int coins[] ={1,2,3};
    char ch[50];
    helper(coins , 4,0, ch, 0);
    return 0;
}
