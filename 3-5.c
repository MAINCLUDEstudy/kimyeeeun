#include <stdio.h>

void test2(int x);

int main() {
    test2(3);
    
    return 0;
}
// 1번을 해보세요!
void test2(int x)
{
    printf("메인 함수로부터 받은 값은 %d입니다\n",x);
}
