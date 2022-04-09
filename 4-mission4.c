#include <stdio.h>

int main() {
    int a, b;

    printf("두 개의 서로 다른 정수를 입력하세요:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    // 1번을 해보세요!
    printf("입력된 두 수 중 큰 값은 %d입니다.", a=a>b?a:b);
    return 0;
}

