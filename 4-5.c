#include <stdio.h>

int main() {
    int a;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &a);
    // 1번을 해보세요!
    if ( a % 2)  //a%2가 1 이라면 즉 if(1)은 조건을 만족한다는 의미  
        printf("입력한 양의 정수는 홀수입니다.\n");
    else
        printf("입력한 양의 정수는 짝수입니다.\n");

    return 0;
}

