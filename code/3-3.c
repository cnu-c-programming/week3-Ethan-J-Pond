#include<stdio.h>
#include<stdarg.h>
int average(int count, ...){
    va_list ap;
    va_start(ap,count);
    int aver = 0;
    for (int i = 0 ; i < count ; i++)
        aver += va_arg(ap, int);
    aver = aver / count;
    va_end(ap);
    return aver;
}
int main(){
    printf("%d\n",average(3,10,20,30));
    printf("%d\n",average(5,10,20,30,40,50));
    return 0;
}
