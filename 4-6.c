#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;

    a = a + b;

    printf("a의 값은 %d, b의 값은 %d\n", a, b);
    // 1번을 해보세요!
    a*= b;
    // 2번을 해보세요!
    b*=10;
    
    printf("a의 값은 %d, b의 값은 %d\n", a, b);

    return 0;
}
