#include <stdio.h>

int main() {
    int score;

    printf("당신의 점수를 입력하세요: ");
    scanf("%d", &score);
    // 1번을 해보세요!
    switch (score/10) {
    case 10:
    case 9:
    printf("A 학점\n");
    break;
    case 8:
    printf("B 학점\n");
    break;
    case 7:
    printf("C 학점\n");
    break;
    case 6:
    printf("D 학점\n");
    break;
    default:
    printf("F 학점\n");
    break;
    }
     return 0;
}
