#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    // 1번을 해보세요!
    printf("0 && 0 = %d\n",(a<b) && (b<c));
    // 2번을 해보세요!
    printf("0 && 1 = %d\n" ,(a<b) && (b>>c));
    // 3번을 해보세요!
    printf("1 && 0 = %d\n" ,(a>b) && (b<c));
    // 4번을 해보세요!
    printf("1 && 1 = %d\n" ,(a>b) && (b>c));
    // 5번을 해보세요!
    printf("0 || 0 = %d\n",(a<b) || (b<c));
    // 6번을 해보세요!
    printf("0 || 1 = %d\n" ,(a<b) || (b>c));
    // 7번을 해보세요!
    printf("1 || 0 = %d\n" ,(a>b) || (b<c));
    // 8번을 해보세요!
    printf("1 || 1 = %d\n" ,(a>b) || (b>c));
    // 9번을 해보세요!
    printf("!0 = %d\n" ,!(5<3));
    // 10번을 해보세요!
     printf("!1 = %d\n" ,!(5>3));

    return 0;
}
