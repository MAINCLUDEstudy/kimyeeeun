#include <stdio.h>

void bell();

int main()
{
    bell(); // 첫 번째 주문
    bell(); // 두 번째 주문
    bell(); // 세 번째 주문
    
    return 0;
}

void bell()
{
    // 1번을 해보세요!
  static int order = 0;
    order++;
    printf("현재 주문 번호는 %d입니다.\n", order);
}
