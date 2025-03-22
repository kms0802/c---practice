#include <stdio.h>

int main(void){
    int a = 35, val;
    int *addr;

    addr = &a;
    val = *addr;

    printf("a = 35일 때\n");
    printf("1.&a 값이 저장된 주소 : %d\n", addr);
    printf("2.실제 값이 저장된 주소(16진수) : %X\n", addr);
    printf("3.*addr에 실제 저장된 값 : %d\n", val);
    return 0;
}