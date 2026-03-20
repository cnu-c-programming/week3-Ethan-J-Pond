#include<stdio.h>

int power(int base, int exp){
    
    if(exp == 0)
        return 1;
    if (exp == 1)
        return base;
    
    return power(base,exp-1) * base;
    //2,3 4,2 8,1 
}
int main(void){
    printf("%d\n",power(2,3));
    printf("%d\n",power(5,0));
    printf("%d\n",power(3,4));
    return 0;
}
