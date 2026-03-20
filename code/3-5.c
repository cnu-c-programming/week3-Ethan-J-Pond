#include<stdio.h>
#include<stdarg.h>
void my_sum(char input_case, ...){
    va_list ap;
    va_start(ap, input_case);
    
    int sum = 0;
    int count = va_arg(ap,int);

    if((char)input_case == 'S'){

        for(int i = 0 ; i < count ; i++)
            printf("%s ",va_arg(ap, char*));
        
    }
        
    else if((char)input_case == 'C')
        for(int i = 0 ; i < count ; i++)
            printf("%c",(char)va_arg(ap, int));
        
    
    else if((char)input_case == 'D'){

        for(int i = 0 ; i < count ; i++){
            sum = sum + va_arg(ap, int);
        }
        printf("%d", sum);
    }
    
    printf("\n");
    va_end(ap);
    return;
}
int main(){
    
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
