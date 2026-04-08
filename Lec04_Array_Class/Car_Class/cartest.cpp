#include <cstdio>
#include <cstring>
#include "car.h"

int main() {
    int s, g, turbo;
    char n[40];
    unsigned int size = sizeof(n);

    printf("자동차 이름 입력: ");
    scanf_s("%s", n, size);

    printf("초기 속도 입력: ");
    scanf_s("%d", &s);

    printf("초기 기어 입력: ");
    scanf_s("%d", &g);

    printf("Turbo ON/OFF (1: On, 0: Off): ");
    scanf_s("%d", &turbo);

    Car c1(s, n, g);      // 일반 자동차
    SportsCar sc(s, n, g);         // 스포츠카(Car s,n,g값 그대로 사용
    
    printf("\n--- 실행 결과 ---\n");

    printf("[일반 가속 전] ");
    c1.display();
    c1.speedUp();         // 5 증가
    printf("[일반 가속 후] ");
    c1.display();

    // 스포츠카 가속 (터보 작동)
    if (turbo == 1) {
        sc.setTurbo(true);
        printf("\n[스포츠카 터보 ON]");
        
        sc.speedUp();         // 20 증가 (터보 기능)
        sc.display();

        printf("\n--- 메모리 주소 ---\n");
        c1.whereAmI();

    }
    else {
        sc.setTurbo(false);
        printf("\n[스포츠카가 터보 OFF]");
      
        sc.speedUp();         // 20 증가 (터보 기능)
        sc.display();

        printf("\n--- 메모리 주소 ---\n");
        c1.whereAmI();
    }
         
    return 0;
}