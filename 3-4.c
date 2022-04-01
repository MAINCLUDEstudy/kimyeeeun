#include <stdio.h>
int test1(void);

int main() {
    int result;
    result = test1();

    printf("test1 함수로부터 돌려받은 값은 %d\n", result);

    return 0;
}
// 1번을 해보세요!
int test1(void)
{
    return 10;
}
