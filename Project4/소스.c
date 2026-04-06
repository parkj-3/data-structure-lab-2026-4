#include <stdio.h>

void main() {
    int i;
    char string1[20] = "Dreams come true!", string2[20], * ptr1;
    char* ptr2; //일반적인 책에서는 char *ptr1 이라고 표현한다 일반변수와 포인터형 변수를 선언할 때 같이 선언할 때는 *ptr이라고 하기에 이것이 굳어져 쓰임

    ptr1 = string1;
    printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1);
    printf("\n string1의 주소 = %u", &string1[0]);

    printf("\n\n string1: %s", string1);
    printf("\n ptr1: %s", ptr1);
    printf("\n ptr1+7: %s", ptr1 + 7); //0문자가 나올 때 까지 출력
    printf("\n string1: %s", string1[7]); //0문자가 나올 때 까지 출력

    printf("\n\n ptr1+7의 주소 : %u", ptr1 + 7);




}