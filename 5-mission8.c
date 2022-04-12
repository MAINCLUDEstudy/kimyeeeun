#include <stdio.h>

int max(int a, int b);

int main()
{
    int a, b;

    printf("서로 다른 두 개의 정수를 입력하세요.\n");

    printf("첫 번째 정수를 입력해주세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력해주세요: ");
    scanf("%d", &b);

    printf("첫 번째 입력된 정수는 %d이고 두 번째 입력된 정수는 %d이며 두 개 중 큰 수는 %d입니다.\n", a, b, max(a, b));

    return 0;
}
//1번을 해보세요!

int max(int a, int b)
{
if (a > b)
    return a;
    else
    return b;
    }

