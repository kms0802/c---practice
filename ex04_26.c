#include <stdio.h>

int main(void)
{
    int num1 = 5, num2 = 3; // 정수형 변수 선언
    float result; // 실수형 변수 선언

    printf("int num1 = 5, num2 = 3\n");

    result = num1 / num2; // 정수형 변수끼리의 나눗셈 연산
    printf("float result = num1 / num2 = %f\n", result);

    result = (float)num1 / num2; // 강제 형 변환을 통한 실수형 나눗셈 연산
    printf("result = (float)num1 / num2 = %f\n", result);
    return 0;

}