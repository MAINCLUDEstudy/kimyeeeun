#include <stdio.h>

int main() {
    int score;

    printf("당신의 점수를 입력하세요: ");
    scanf("%d", &score);
    // 1번을 해보세요!
    
    if (score >= 90)
    printf("A 학점\n");
    
    else if (score >= 80)
    printf("B 학점\n");
    
    else if (score >= 70)
    printf("C 학점\n");
    
    else if (score >= 60)
    printf("D 학점\n");
    
    else 
    printf("F 학점\n");
    
    
   
}
