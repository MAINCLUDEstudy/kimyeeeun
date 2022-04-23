#include  <stdio.h>

int main() {
    int mon;
    int day;

    printf("1월에서 12월달을 선택하세요: 입력 1에서 12까지 숫자: ");
    scanf("%d", &mon);
    // 1번을 해보세요!
    switch(mon) {
    case 2:
        day = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    default:
        day = 31;
        break;
   }

   
    printf("%d월의 마지막 날은 %d일입니다.\n", mon, day);
    
    return 0;
}


