#include<stdio.h>
#include<stdarg.h>
int max_of(int count, ...){
    va_list ap;
    va_start(ap,count);

    int num_max = 0;
    int num_challenge;
    for (int i = 0 ; i < count ; i++){
        num_challenge = va_arg(ap,int);
        if (num_max < num_challenge)
            num_max = num_challenge;
    }
        
    va_end(ap);

    return num_max;
}
int main(){
    printf("%d\n",max_of(4,5,12,3,9));
    printf("%d\n",max_of(6,1,2,3,4,5,6));
    printf("%d\n",max_of(3,100,200,300));
    
    return 0;
}
