#include <stdio.h>
// 1번을 해보세요!
int a = 1;

void func1();

int main()
{
    // 2번을 해보세요!
int b = 2;

    printf("여기는 main() 함수입니다.\n");
    printf("main() 함수에서 a값은 %d 입니다.\n", a); // ③ a값 출력
    printf("main() 함수에서 b값은 %d 입니다.\n", b);

    func1(); // ④ 함수 호출
    
    return 0;

}

void func1()
{
    printf("여기는 func1 함수입니다.\n");
    printf("func1 함수에서 a값은 %d입니다.\n", a);  // ⑤ a값 출력
    printf("func1 함수에서 b값은 %d입니다.\n", b);  // ⑥ b값 출력
}
