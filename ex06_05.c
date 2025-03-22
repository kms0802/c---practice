#include <stdio.h>

int main(void){
    char alphabet;

    printf("알파벳 입력 : ");
    scanf("%c", &alphabet, sizeof(alphabet));

    if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("입력한 알파벳 %c는 \"대문자\"이고\n", alphabet);
        printf("아스키코드값은 %d입니다.\n", alphabet);
    }
    else
    {
        printf("입력한 알파벳 %c는 \"소문자\"이고\n", alphabet);
        printf("아스키코드값은 %d입니다.\n", alphabet);
    }

    return 0;
}