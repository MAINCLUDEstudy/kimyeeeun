#include <stdio.h>

int func1(void);
char func2(void);

void func3(void);
void func4(float x);

int main() {
    int a;
    char b;
    float c;

    a = func1();
    b = func2();

    printf("func1() 함수로 받은 전달받은 값은 %d입니다.\n", a);
    printf("func2() 함수로 받은 전달받은 문자는 %c입니다.\n", b);

    func3();

    printf("func4() 함수로 전달할 실수를 입력하세요: ");
    scanf("%f", &c);

    func4(c);
    
    return 0;
}
// 1번을 해보세요!
int func1(void)
{
    return 1;
}

// 2번을 해보세요!
char func2(void)
{
    return 'a';
}

// 3번을 해보세요!
void func3(void)
{
printf("hello\n");
}

// 4번을 해보세요!
void func4(float x)
{
printf("main() 함수로부터 받은 실수 값은 %f입니다.\n",x);
}
