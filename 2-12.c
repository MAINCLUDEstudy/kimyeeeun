#include <stdio.h>

main() {
    
    int a = 10;  // a 변수 선언과 동시에 10으로 초기화
    int b = 20;  // b 변수 선언과 동시에 20으로 초기화
    // 1번을 해보세요!
    int temp;

    printf("a의 값은 %d이고 b의 값은 %d입니다.\n", a, b);
    // 2번을 해보세요!
    temp = a;
    // 3번을 해보세요!
    a = b;
    // 4번을 해보세요!
     b = temp;

    printf("a의 값은 %d이고 b의 값은 %d입니다.\n", a, b);
}
