#include <stdio.h>

int sum(int x, int y); // ① sum() 함수 선언

int main() {
    int x = 10, y = 20;
    int result;
    // 2번을 해보세요!
    result = sum(x,y);
    printf("%d + %d = %d\n", x, y, result);
    return 0; //프로그램이 문제가 없을 경우 0을 반환함
}

// 1번을 해보세요!
int sum(int x, int y)
{
      return x + y;
}
