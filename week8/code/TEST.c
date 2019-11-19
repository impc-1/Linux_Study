#include <stdio.h>
#include <stdlib.h> 
int length(char a[]);    //因为函数位于main()函数之后，所以当引用这个函数时应该首先进行声明便于之后的引用 
int main(void){    
char a[] = {'a', 'b', 'c', 'd', 'f'};
    
int i;    
int j = 47;    
printf("%x\n", j);  //输出结果为:    2f    
printf("%X\n", j);  //输出结果为:    2F    
printf("%#x\n", j); //输出结果为:    0x2f    
printf("%#X\n", j); //输出结果为:    0X2F    %#X推荐使用    
for (i = 0; i < length(a); i++)   
 {        printf("%d\n", a[i]);    }    
return 0;
} 

int length(char *a){    
int value;    
value = sizeof(a) / sizeof(a[0]);    
return value;
}

