#include <cstdio>
#include <cstring>
#include "car.h"

int main() {
    int s, g, turbo;
    char n[40];

    // 1. 사용자로부터 값 입력받기
    printf("자동차 이름 입력: ");
    // scanf_s에서 %s를 쓸 때는 뒤에 사이즈(sizeof(n))를 꼭 넣어줘야 합니다.
    scanf_s("%s", n, (unsigned int)sizeof(n));

    printf("초기 속도 입력: ");
    scanf_s("%d", &s);

    printf("초기 기어 입력: ");
    scanf_s("%d", &g);

    printf("터보를 켜시겠습니까? (1: On, 0: Off): ");
    scanf_s("%d", &turbo);

    // 2. 입력받은 값으로 객체 생성
    Car c1(s, n, g);      // 일반 자동차
    SportsCar sc(s, n, g);         // 기본 생성자로 생성된 스포츠카 (이름 "Car", 속도 0)
    
    // 3. 실행 로직
    printf("\n--- 실행 결과 ---\n");

    // 일반 차 가속
    printf("[일반 가속 전] ");
    c1.display();
    c1.speedUp();         // 5 증가
    printf("[일반 가속 후] ");
    c1.display();

    // 스포츠카 가속 (터보 작동)
    if (turbo == 1) {
        sc.setTurbo(true);
        printf("\n[스포츠카 터보 ON]\n");
        
        sc.speedUp();         // 20 증가 (터보 기능)
        sc.display();

        printf("\n--- 메모리 주소 ---\n");
        c1.whereAmI();

    }
    else {
        sc.setTurbo(false);
        printf("\n[스포츠카가 터보 OFF]\n");
      
        sc.speedUp();         // 20 증가 (터보 기능)
        sc.display();

        printf("\n--- 메모리 주소 ---\n");
        c1.whereAmI();
    }
         
    return 0;
}