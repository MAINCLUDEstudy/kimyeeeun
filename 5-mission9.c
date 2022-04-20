#include <stdio.h>

int compare(int a, int b);
int absolute(int n);

int main()
{
    int a, b;

    printf("서로 다른 두 개의 정수를 입력하세요.\n");

    printf("첫 번째 정수를 입력해주세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력해주세요: ");
    scanf("%d", &b);

    printf("첫 번째 입력된 정수는 %d 이고 두 번째 입력된 정수는 %d이며 두 개 중 절댓값이 큰 수는 %d입니다.\n", a, b, compare(a, b));

    return 0;
}

// 2번을 해보세요!
int compare(int a, int b)
{
if (absolute(a)> absolute(b))
    return a;
    else
    return b;
}

// 1번을 해보세요!
int absolute(int n)
{
    if(n<0)
    return(-1)*n;
    else
    return n;
}
